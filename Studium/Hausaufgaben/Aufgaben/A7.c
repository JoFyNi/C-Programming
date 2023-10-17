#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float wBF = 1.2115; // wiederstandBerechnungsFaktor
float wiederstand = 1.0;
int wiederstandsNr = 1;
double resistor_from_user = 0.0;

void printE12SeriesOnConsole();
void getResistorFromUser();
void checkBestOption(float ausEinem, float ausZwei);

float findBestTwoResistorsInParallel();
float findBestSingleResistor();

int main() {   
    printE12SeriesOnConsole();
    getResistorFromUser();

    float besterAusEinem = findBestSingleResistor();
    printf("\nDie beste Differenz vom Benutzerwert %.2f Ohm zum E12-Widerstand ist  %.2f%%.\n\n", resistor_from_user, ( besterAusEinem / resistor_from_user) * 100);

    // Berechnung der Parallelschaltung
    float besterAusZwei = findBestTwoResistorsInParallel();
    printf("\nDer Beste Wiederstand der Parallelschaltung ist %.2f Ohm", besterAusZwei);

    checkBestOption(besterAusEinem, besterAusZwei);

    return 0;
}

float calculateE12Resistor(int NR) {
    wiederstand = pow(wBF,NR);
    return wiederstand;
}

void printE12SeriesOnConsole() {
    printf("Wiederstand %d hat einen Wert von %.2f Ohm \n", wiederstandsNr, wiederstand);
    wiederstandsNr++;
    while (wiederstand < 1000) {
        printf("Wiederstand %d hat einen Wert von %.2f Ohm \n", wiederstandsNr, calculateE12Resistor(wiederstandsNr));  
        wiederstandsNr++; 
    }
}

void getResistorFromUser () {
    printf("\nGeben Sie einen gewnschten Wert ein: ");
    scanf("%lf", &resistor_from_user);
}

float findBestSingleResistor() {
    printf("Vergleiche den Wert %.2f mit den Werten von E12\n", resistor_from_user);

    wiederstand = 1.0;
    wiederstandsNr = 1;
    // vergleiche den Benutzerwert mit den E12 Werten
        float bestResistor = 1.0;
        float closestDifference = fabs(resistor_from_user - bestResistor);
        int closestResistorNumber = 1;

        while (bestResistor <= 1000) {
            float difference = fabs(resistor_from_user - bestResistor);
            if (difference < closestDifference) {
                closestDifference = difference;
                closestResistorNumber = wiederstandsNr;
            }
            bestResistor = calculateE12Resistor(++wiederstandsNr);
        }
    return closestDifference;
}

// Parallelschaltung
float calculateTwoResistorsInParallel(float wiederstand1, float wiederstand2) {
    // Berechnung eines Paralellschaltkreises mit 2 Wiederst„nden
    // Rges = R1 * R2 / R2 + R1
    float gesamtWiederstand = (wiederstand2 * wiederstand1) / (wiederstand2 + wiederstand1);
    return gesamtWiederstand;
}

float findBestTwoResistorsInParallel() {
    float bestResistance = -1;  // Initialisierung mit einem Wert auáerhalb des gltigen Bereichs
    float bestR1;
    float bestR2;
    for (float r1 = 1.0; r1 <= 100.0; r1 += 1.0) {
        for (float r2 = 1.0; r2 <= 100.0; r2 += 1.0) {
            float parallelResistance = calculateTwoResistorsInParallel(r1, r2);
            if (bestResistance == -1 || fabs(resistor_from_user - parallelResistance) < fabs(resistor_from_user - bestResistance)) {
                bestResistance = parallelResistance;
                bestR1 = r1;
                bestR2 = r2;
                printf("R1: %6.2f Ohm    R2: %6.2f Ohm    Rges = %6.2f Ohm    Usereingabe: %.2f Ohm \n", bestR1, bestR2, bestResistance, resistor_from_user);
            }
        }
    }
    return bestResistance;
}

void checkBestOption(float ausEinem, float ausZwei) {
    if (resistor_from_user == ausEinem)
    {
        printf("Die Wahl einer Einzelschaltung ist besser!");
    } else if (resistor_from_user == ausZwei) {
        printf("Die Wahl einer Parallelschaltung ist besser!");
    }
}

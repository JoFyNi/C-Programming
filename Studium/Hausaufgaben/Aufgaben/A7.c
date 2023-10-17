#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float wBF = 1.2115; // wiederstandBerechnungsFaktor
float wiederstand = 1.0;
int wiederstandsNr = 1;
double resistor_from_user = 0.0;

void printE12SeriesOnConsole();
void getResistorFromUser();
void findBestSingleResistor();
void findBestTwoResistorsInParallel();

int main() {
    // Aufgabenteil 1, berechnung der Wiederstandsreihe E12
    /*
    printf("Wiederstand %d hat einen Wert von %.2f Ohm \n", wiederstandsNr, wiederstand);
    wiederstandsNr++;
    while (wiederstand <= 1000)
    {
        wiederstand = wiederstand*wBF;
        printf("Wiederstand %d hat einen Wert von %.2f Ohm \n", wiederstandsNr, wiederstand);
        wiederstandsNr++;
    }
    */ 

    // Aufgabenteil 2,     
    printE12SeriesOnConsole();
    findBestSingleResistor();

    // Aufgabe 4
    calculateTwoResistorsInParallel(12.5, 20.5);
    findBestTwoResistorsInParallel();
}

float calculateE12Resistor(int NR) {
    wiederstand = pow(wBF,NR);
    return wiederstand;
}

void printE12SeriesOnConsole() {
    printf("Wiederstand %d hat einen Wert von %.2f Ohm \n", wiederstandsNr, wiederstand);
    wiederstandsNr++;
    while (wiederstand < 1000)
    {
        printf("Wiederstand %d hat einen Wert von %.2f Ohm \n", wiederstandsNr, calculateE12Resistor(wiederstandsNr));  
        wiederstandsNr++; 
    }
}

void getResistorFromUser () {
    printf("\nGeben Sie einen gewnschten Wert ein: ");
    scanf("%lf", &resistor_from_user);
}

void findBestSingleResistor() {
    getResistorFromUser();
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

    printf("Der beste E12-Widerstand fr %.2f Ohm ist Widerstand %d mit einem Unterschied von %.2f%%.\n", resistor_from_user, closestResistorNumber, (closestDifference / resistor_from_user) * 100);
}

// Parallelschaltung
float calculateTwoResistorsInParallel(float wiederstand1, float wiederstand2) {
    // Berechnung eines Paralellschaltkreises mit 2 Wiederst„nden
}

void findBestTwoResistorsInParallel() {
    for (int i=0; i<100;i++) {
        for (int a=0; a<10;a++) {
            printf("i=%d a=%d",i,a);
        }
    }
}   
#include <stdio.h>
#include <math.h>

float wBF = 1.2115; // Widerstandsberechnungsfaktor
int wiederstandsNr = 1;

float calculateE12Resistor(int NR) {
    return pow(wBF, NR);
}

float getResistorFromUser() {
    float resistor_from_user;
    printf("\nGeben Sie einen gewÅnschten Wert ein: ");
    scanf("%f", &resistor_from_user);
    return resistor_from_user;
}

void findBestSingleResistor(float resistor_from_user) {
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

    printf("Der beste E12-Widerstand fÅr %.2f Ohm ist Widerstand %d mit einem Unterschied von %.2f%%.\n", resistor_from_user, closestResistorNumber, (closestDifference / resistor_from_user) * 100);
}

int main() {
    float resistor_from_user = getResistorFromUser();
    findBestSingleResistor(resistor_from_user);
    return 0;
}

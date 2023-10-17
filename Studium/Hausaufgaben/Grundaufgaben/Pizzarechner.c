#include <stdio.h>

int main() {
    // Angaben zur ersten Pizza (Salvatore)
    double preisSalvatore = 7.0; // Preis in ?
    double durchmesserSalvatore = 28.0; // Durchmesser in cm

    // Angaben zur zweiten Pizza (Fellini)
    double preisFellini = 8.0; // Preis in ?
    double durchmesserFellini = 30.0; // Durchmesser in cm

    // Berechnung der Fl„chenpreise in ?/cm^2
    double flaechenpreisSalvatore = preisSalvatore / ((durchmesserSalvatore / 2.0) * (durchmesserSalvatore / 2.0) * 3.14159265);
    double flaechenpreisFellini = preisFellini / ((durchmesserFellini / 2.0) * (durchmesserFellini / 2.0) * 3.14159265);

    // Ausgabe der Fl„chenpreise
    printf("Fl„chenpreis Salvatore: %.10f ?/cm^2\n", flaechenpreisSalvatore);
    printf("Fl„chenpreis Fellini:   %.10f ?/cm^2\n", flaechenpreisFellini);

    // Vergleich der Fl„chenpreise und Speicherung des Ergebnisses in einer Variablen
    int vergleich = (flaechenpreisSalvatore < flaechenpreisFellini) ? 1 : 0;

    // Ausgabe des Vergleichs
    if (vergleich) {
        printf("Salvatore bietet den gnstigeren Fl„chenpreis.\n");
    } else {
        printf("Fellini bietet den gnstigeren Fl„chenpreis.\n");
    }

    return 0;
}

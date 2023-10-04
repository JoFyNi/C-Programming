#include <stdio.h>

int main() {
    printf("Start des Programmes \n");
    
    int Salvatore = 7.0;
    int Fellini = 8.0;

    int SalvatoreSize = 28.0;
    int FelliniSize = 30.0;

    float SalvatorProCM = (float)Salvatore / (float)SalvatoreSize;
    float FelliniProCM = (float)Fellini / (float)FelliniSize;

    printf("cm Preis der Salvatore: %d / %d = %.2f%s \n", Salvatore, SalvatoreSize, SalvatorProCM, " Euro");
    printf("cm Preis der Fellini: %d / %d = %.2f%s \n", Fellini, FelliniSize, FelliniProCM, " Euro");

    // berechnung des Fl„chenpreis

    return 0;
}
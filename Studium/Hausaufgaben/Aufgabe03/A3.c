#include <stdio.h>
#include <math.h>

int main() {
    float startKapital;
    float zinssatz;
    float dauer;
    float gewinn;
    float result;
    float test;

    printf("Gib ein Startkapital ein: \n");
    scanf("%f", &startKapital);

    printf("Gib einen Zinssatz ein: \n");
    scanf("%f", &zinssatz);

    printf("Gib eine Zahl der Dauer (Jahre) ein: \n");
    scanf("%f", &dauer);

    // Die Zinsen sind das Produkt aus Zinssatz und Kapital: Z = p % ? K Z = p\% \cdot K Z=p%?K
    gewinn = startKapital * (zinssatz / 100);
    printf("Gewinn: %.2f \n", gewinn);

    test = gewinn / (zinssatz/100);
    printf("Test: %.2f \n", test);



    result = pow(gewinn, dauer); 

    printf("Endkapital: %.2f \n", result);

    return 0;
}
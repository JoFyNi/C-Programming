#include <stdio.h>
// Eine Zahl wird mit 100 verglichen und mit 10 addiert wenn diese kleiner als 100 ist.s
int main() {
    
    printf("Gib eine Zahl ein, welche mit 100 verglichen werden soll.\n");
    int iEingabe;
    scanf("%d", &iEingabe);
    printf("Eingabe %d \n", iEingabe);
    int i = iEingabe;
    while (i<100)
    {   
        i+=10;
        if(i>100) {
            printf("Fehler! Der Wert ist gr”áer als 100.\n");
            printf("Ihre Zahl betr„gt %d\n", i);
            printf("Geben Sie eine neue Zahl ein:\n");
            scanf("%d", &iEingabe); // Neue Eingabe einlesen
            i = iEingabe; // i mit der neuen Eingabe aktualisieren
        } else {  
            printf("Ihre Zahl wurde um 10 auf %d erh”ht\n", i);
        }
    }
    
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(void);
void schreibeSCV(void);
void leseCSV(void);

// variablen
float winkel[3][5];


int main(void) {
    menu();

    return 0;
}

int menu(void) {
    system("cls");
    printf("MenÅ: \n1. Schreibe CSV Datei \n2. Lese CSV Datei \n3. Exit \n");
    
    char *p, s[100];
    long n;

    // liest den Char und gibt ihn als long bzw. int wieder aus
    while (fgets(s, sizeof(s), stdin)) {
        n = strtol(s, &p, 10);
        if (p == s || *p != '\n') {
            printf("Please enter an integer: ");
        } else break;
    }

    switch (n)
    {
    case 1:
        schreibeSCV();
        break;
    case 2:
        leseCSV();
        break;
    case 3:
        break;
    default:
        break;
    }

    return 0;
}


void schreibeSCV(void) {
    printf("Schreibe.....\n");


    int counter = 1;
    char *p, s[100];
    
    do {
        printf("Gib den %d. Winkel ein: ", counter);
        
        if (fgets(s, sizeof(s), stdin)) {
            winkel[counter - 1][0] = strtof(s, &p);

            if (p == s || *p != '\n') {
                printf("Bitte geben Sie eine gÅltige Gleitkommazahl ein.\n");
            } else {
                counter++;
            }
        }
    } while (counter <= 4);

    // Ausgabe der eingegebenen Werte
    printf("Eingegebene Werte:\n");
    for (int i = 0; i < 4; i++) {
        printf("Winkel %d: %.2f\n", i + 1, winkel[i][0]);
    }

    // CSV Datei îffnen

    // CSV Datei schreiben 
    // öberschriften schreiben

    // per schleife die Daten in diez Spalten schreiben


}

void leseCSV(void) {
    printf("lese .....");

}
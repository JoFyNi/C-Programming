#include <stdio.h>
#include <math.h>
#include <string.h>

void eingeben (int*);
void korrigieren (int*);
void ausgeben (int*);
void korrigieren2( int* );
void korrigierenInString(int *sWert);

int main() {
    int wert = 0;
    int sWert = 0;
    

    // Erstellen Sie eine Schleife, die die Eingabe, Ausgabe und die Korrekturen solange wiederholt, bis die Zahl 0 eingegeben wird
    do
    {
        // Erh„lt einen Zeiger auf eine Zahl und erm”glicht die Eingabe dieser Zahl durch die Tastatur.
        eingeben (&wert);

        // Erh„lt einen Zeiger auf die vorher eingegeben Zahl und korrigiert diese, falls sie ungerade ist.
        korrigieren (&wert);

        // Erh„lt einen Zeiger auf die vorher eingegebene und korrigierte Zahl und gibt diese mit Wert und Adresse am Bildschirm aus.
        ausgeben (&wert);

        if (wert == 0) {break;}
    } while (1);
    
    sWert = wert;
    
    // korrigieren2 soll nach der Funktion aus Teil 1 aufgerufen werden. Fllen Sie dazu die fehlenden Stellen rechts neben der Zahl mit 0 auf, bis 5 Stellen erreicht sind.
    korrigieren2(&wert);

    korrigierenInString(&sWert);
    printf("Korrigierte Zahl: %d\n", sWert);
}


void eingeben (int *wert) {
    printf("Gib eine Zahl ein, 0 zum beenden: \n");
    scanf("%d", *&wert);
}

// Alles unter diesem Kommentar wird momentan nicht genutzt!!!

void korrigieren (int *wert) {
    printf("Wert: %d\n", *wert);
    int rest = *wert % 2;
    printf("Rest: %d \n", rest);
    if (rest == 1)
    {
        *wert+=1;
    }
}

void ausgeben (int *wert) {
    printf("Der Wert betraegt: %d \n", *wert);
}

void korrigieren2( int *wert ) {
    int a,j=0;
    for(a=1;a<*wert;a*=10)                               // schleife fr die nullstellen
    {
        j++;                                         
    }
    printf("Deine Zahl %i hat %i Stellen \n",*wert,j);
    if (j<5)
    {   
        int aa = 5-j;
        for (int i = 0; i < aa; i++)
        {
            *wert *= 10;
        }
    }
    printf("Auffllen mit %d Nullen -> Wert: %d \n", 5-j, *wert);
}

void korrigierenInString(int *sWert) {
    printf("Wert %d wird in Strig umgewandelt!\n", *sWert);

    char buffer[10]; // Puffer, um die Zahl in einen Text umzuwandeln
    sprintf(buffer, "%d", *sWert); // Wandeln Sie die Zahl in einen Text um

    // šberprfen Sie die L„nge des Texts
    int length = strlen(buffer);

    if (length < 5) {
        int zerosToAdd = 5 - length;

        // Fllen Sie fehlende Stellen mit Nullen auf
        for (int i = 0; i < zerosToAdd; i++) {
            strcat(buffer, "0");
        }

        // Wandeln Sie den Text wieder in eine Zahl um
        sscanf(buffer, "%d", sWert);
    }
}
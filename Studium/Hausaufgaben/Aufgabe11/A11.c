#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Programm zur analyse der ersten 5 Worte eines Satzes
int main () {
    char inputString[50];

    // Einlesen eines Satzes als Zeichenkette und ablage in einer gegeigeneten Datenstruktur
    // Die ersten 5 Worte ermitteln und jedes Wort in einem Wortspeicher ablegen
    // char *variable mit 5 Elementen anlegen und mit calloc 20 Zeichen reservieren 

    printf("Enter a String [max 50 chars]:\n");
    fgets(inputString, sizeof(inputString), stdin);
    int length = strlen(inputString);



    char *wortSpeicher[5];
    for (int i = 0; i < 5; ++i) {
        wortSpeicher[i] = (char *)calloc(20, sizeof(char)); // Speicher fr mindestens 20 Zeichen
    }

    // Ermitteln der ersten 5 Worte
    char *token = strtok(inputString, " "); // Leerzeichen zwischen den Worten 
    int wortIndex = 0;
    while (token != NULL && wortIndex < 5) { // mache weiter solange ein Wieteres Zeichen gefunden wird
        strcpy(wortSpeicher[wortIndex], token); // kopiert das Wort in den Speicher
        token = strtok(NULL, " "); 
        wortIndex++; 
    }

    // Ausgabe der Worte
    printf("Die ersten 5 Worte sind:\n");
    for (int i = 0; i < wortIndex; ++i) {
        printf("%s\n", wortSpeicher[i]);
    }

    // Freigabe des allokierten Speichers
    for (int i = 0; i < 5; ++i) {
        free(wortSpeicher[i]);
    }

    return 0;
}


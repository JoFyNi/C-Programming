#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int numberOfElements = 5;



// Programm zur analyse der ersten 5 Worte eines Satzes
int main () {
    int Array[5];
    char inputString[50];
    char* a;

    // Einlesen eines Satzes als Zeichenkette und ablage in einer gegeigeneten Datenstruktur
    // Die ersten 5 Worte ermitteln und jedes Wort in einem Wortspeicher ablegen
    // char *variable mit 5 Elementen anlegen und mit calloc 20 Zeichen reservieren 

    a = (char*)calloc(numberOfElements, sizeof(int));
    printf("Enter a String [max 50 chars]:\n");
    scanf("%s",&inputString);
    //fgets(inputString, 50, stdin);

    int wordCount = 0;
    int wordIndex = 0;

    // Schleife durch den Eingabe-String
    for (int i = 0; inputString[i] != '\0'; i++) {
        wordCount++;
        // Wenn ein Leerzeichen gefunden wird, beende das aktuelle Wort und beginne ein neues
        if (inputString[i] == ' ' || inputString[i] == '\t' || inputString[i] == '\n') {
            for (int i = 0; i < wordCount; i++)
            {
                a[wordIndex] +  inputString[i];
            }
            wordIndex++;
            wordCount = 0;
            // Wenn die maximale Anzahl von W”rtern erreicht ist, breche die Schleife ab
            if (wordCount >= 20) {
                break;
            }
        }
    }

    // Ausgabe der gespeicherten Worte
    printf("Gespeicherte Worte:\n");
    for (int i = 0; i < numberOfElements; i++) {
        printf("%s\n", a[i]);
    }
    free( a );

    return 0;

}


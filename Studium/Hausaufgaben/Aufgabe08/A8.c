#include <stdio.h>

int summe(int[10]);
float mittelwert(int[10]);
int maximum( int [10], int* );

void feld_einlesen(int [10]);
void feld_ausgeben (int [10]);
void feld_sortieren (int[10]);

// In diese Aufgabe vertiefen Sie das Thema Unterfunktionen und wenden es dies auf das neue Thema "Arrays" (Felder) an.
int main() {
    int intArray[] = {1,21,3,4,5,64,7,8,9,10};

    // Der Benutzer soll ein beliebiges 10er Feld (Integer) Åber die Tastatur eingeben kînnen.
    feld_einlesen(intArray);

    // Entwickeln Sie ein Unterprogramm, um ein 10er Feld am Bildschirm anzeigen zu kînnen.
    feld_ausgeben(intArray);

    // Erweitern Sie Ihr Programm um ein weiteres Unterprogramm, welches das Feld von klein nach gro· sortiert.
    feld_sortieren(intArray);


    // Berechnen Sie die Summe aller Feldelemente und geben Sie die Summe aus.
    int arraySumme = summe(intArray);;
    printf("Summe: %d \n", arraySumme);

    // Berechnen Sie den Mittelwert aller Feldelemente und geben Sie diesen aus.
    float arrayMittelwert = mittelwert(intArray);
    printf("Mittelwert: %.2f \n", arrayMittelwert);
    

    // Ermitteln Sie das grî·te Feldelement und geben Sie dessen Position (Index) und Wert aus.
    int biggestElementPosition = 0;
    int biggestElement = maximum(intArray, &biggestElementPosition);
    printf("Groesstes Feldelement: Index-Nr.%d -> %d \n", biggestElementPosition, biggestElement);
    
}

// Summe berechnen. Neue Funktion: int summe( int [10] )
// Berechnung der Summe aller Elemente des Åbergebenen Feldes int [10]
int summe( int intArray[10] ) {
    int summe = 0;
    for (int i = 0; i < 10; i++)
    {
        summe += intArray[i];
        printf("Array: %d = %d \n", i, intArray[i]);
    }
    return summe;
}


// Mittelwert berechnen. Neue Funktion: float mittelwert( int [10] )
// Berechnung des Mittelwerts aller Elemente des Åbergebenen Feldes int [10]
float mittelwert( int intArray[10] ) {
    int arrayCounter = 0;
    int summe = 0;
    for (int i = 0; i < 10; i++)
    {
        summe += intArray[i];
        arrayCounter++;
    }
    return (float)summe / arrayCounter;
}


// Grî·tes Feldelement und Stelle suchen. Neue Funktion: int maximum( int [10], int* )
// Suche nach dem grî·ten Feldelement und Ausgabe seiner Position (Index) im Feld.
int maximum( int intArray[10], int *biggestElementPosition) {
    int biggestElement = 0;
    *biggestElementPosition = 0;
    for (int i = 0; i < 10; i++)
    {
        if (biggestElement < intArray[i])
        {
            biggestElement = intArray[i];
            *biggestElementPosition = i;
            printf("Neustes Element: %d\n", i, biggestElement);
        }
    }
    return biggestElement;
}

//-------------------------------------------------------------------------------------------------
// voids 

void feld_einlesen(int intArray[10]) {
    int arrayIndex = 0;
    printf("Geben Sie einen geÅnschten Index von 0 bis 9 ein: \n");
    scanf("%d", &arrayIndex);
    int userEntry = 0;
    printf("Geben Sie einen neuen Wert fÅr den Index %d ein: \n", arrayIndex);
    scanf("%d", &userEntry);

    intArray[arrayIndex] = userEntry;
    printf("Der Index %d hat nun den Wert %d \n", arrayIndex, intArray[arrayIndex]);
}

void feld_ausgeben (int intArray[10]) {
    int arrayIndex = 0;
    printf("Geben Sie einen geÅnschten Index von 0 bis 9 ein den Sie ausgeben mîchten: \n");
    scanf("%d", &arrayIndex);

    printf("Index %d hat den Wert %d", arrayIndex, intArray[arrayIndex]);
}

void feld_sortieren (int intArray[10]) {
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {           
            int a = intArray[j];            
            int b = intArray[j+1];          
            if (intArray[j] > intArray[j+1]) {      // wenn index[i] > index[i+1] (next Index)
                intArray[j] = b;                    // index[i]   = index[i+1]  (Tausche index mit dem naechsten)
                intArray[j+1] = a;                  // index[i+1] = index [i]   (Tausche den naechsten mit dem jetztigen)

                printf("i+1: %d  i: %d", a, b);
            }
        }
    }
}
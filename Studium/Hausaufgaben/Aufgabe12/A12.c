#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct TYP_T;

typedef struct PLATZ_T
{
    int seriennummer;
    int xKoordinate;
    int yKoordinate;
    struct TYP_T *typ; // Einbettung der TYP_T-Struktur fÅr zusÑtzliche Informationen
} PLATZ_T;

typedef struct TYP_T
{
    char Fahrzeug [10];
    float KW;
} TYP_T;


/////////////////////////////////////////////////////////////////////////////////////////////////////////
// Funktion zum Generieren von PLATZ_T Strukturen mit zufaelligen Informationen
void generatRandomStructure(struct PLATZ_T *platz) {
    // Platz
    platz->seriennummer = rand() % 90000000 + 10000000;
    platz->xKoordinate = rand() % 10;
    platz->yKoordinate = rand() % 10;

    // Allokation und Initialisierung der TYP_T-Struktur
    platz->typ = (struct TYP_T *)malloc(sizeof(struct TYP_T));

    // Typ
    char nameTyp[][20] = {"Kombi", "Limousine", "Cabrio"};
    int anzahlNamen = sizeof(nameTyp) / sizeof(nameTyp[0]);
    int zufallsIndex = rand() % anzahlNamen;
    strcpy(platz->typ->Fahrzeug, nameTyp[zufallsIndex]);

    // ZufÑllige Leistung zwischen 100 und 1000
    platz->typ->KW = (float)(rand() % 901 + 100) / 10.0;
}

void openSpace(struct PLATZ_T *platz) {
    // Alles wird auf 0 gesetzt
    platz->seriennummer = 0;
    platz->xKoordinate = 0;
    platz->yKoordinate = 0;

    // Allokation und Initialisierung der TYP_T-Struktur
    platz->typ = (struct TYP_T *)malloc(sizeof(struct TYP_T));

    // Typ
    strcpy(platz->typ->Fahrzeug, "--");
    // Leistung
    platz->typ->KW = 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

int main() {
    // Ziel des ersten Teils der Aufgabe 12 ist es, 20 Eintraege der struktur PLATZ_T zu definieren 
    // und die ersten 5 Fahrzuege im Lager auszugeben

    struct PLATZ_T lager[20];
    for (int i = 0; i < 20; ++i) {
        openSpace(&lager[i]);
    }

    // Generiere zufÑllige Informationen fÅr jeden Eintrag im Lager
    for (int i = 0; i < 10; ++i) {
        generatRandomStructure(&lager[i]);
    }

    // Augabe der ersten 5 Fahrzeuge im Lager
    for (int i = 0; i < 5; i++) {
        ausgabe(lager[i]);
    }

    // Ueberpruefung des Lager bestandes
    for (int i = 0; i < 20; i++)
    {
        if (lager[i].seriennummer == 0 && lager[i].xKoordinate == 0 && lager[i].yKoordinate == 0) {
            ausgabe(lager[i]);
        }
    }

    // Manuelles Entfernen eines Fahrzeuges nach Seriennummer
    int userEntry;
    printf("Gib eine 8 Stellige Seriennummer ein: ");
    scanf("%d", &userEntry);

    for (int i = 0; i < 20; i++)
    {
        if (lager[i].seriennummer == userEntry)
        {   
            printf("\nlîsche Eintrag\n");
            openSpace(&lager[i]);
        } else {
            if (lager[i].seriennummer != 0)
            {
                printf("%d != %d\n", lager[i].seriennummer, userEntry);
            }
        }
    }
    
    // Erneute Ausgabe des Lager bestandes
    printf("Das Lager Sieht nun so aus:\n");
    for (int i = 0; i < 20; i++) {
        ausgabe(lager[i]);
    }


    // Inventur
    int anzahl = 0;
    int kombi = 0;
    int limousine = 0;
    int cabrio = 0;
    char nameTyp[][10] = {"Kombi", "Limousine", "Cabrio"};

    // Wenn das Fahrzeuge[i] == eines Types ist, wird der counter der Maximalanzahl sowie des Typcounters erhîht
    for (int i = 0; i < 20; i++)
    {
        if (strcmp(lager[i].typ->Fahrzeug, nameTyp[0]) == 0) {
            kombi++;
            anzahl++;
        } else if (strcmp(lager[i].typ->Fahrzeug, nameTyp[1]) == 0) {
            limousine++;
            anzahl++;
        } else if (strcmp(lager[i].typ->Fahrzeug, nameTyp[2]) == 0) {
            cabrio++;
            anzahl++;
        }
    }
    // Ausgabe der Inventur
    printf("Es sind Insgesamt %d Fahrzeuge, darunter sind:\n", anzahl);
    printf("%d Kombis\n", kombi);
    printf("%d Limousinen\n", limousine);
    printf("%d Cabrios\n", cabrio);


    // Freigabe des allokierten Speichers fÅr die TYP_T-Strukturen
    for (int i = 0; i < 20; ++i) {
        free(lager[i].typ);
    }

    return 0;
}

void ausgabe( PLATZ_T *X) {
    printf("Seriennummer: %d\n", X->seriennummer);
    printf("X Koordinate: %d\n", X->xKoordinate);
    printf("Y Koordinate: %d\n", X->yKoordinate);
    printf("Fahrzeugtyp:  %s\n", X->typ->Fahrzeug);
    printf("Leistung:     %.2f\n", X->typ->KW);
    printf("\n");
}
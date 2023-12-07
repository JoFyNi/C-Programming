#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int isVokal(char zeichen);
void removeCharacter(char *str, const char *charactersToRemove);
int huffmann(char string1, char string2);

/*
    Aufgabe 10
    // w”rter Z„hlen
    // wenn ber 50 zeichen -> repeat
    // wenn weniger -> eingabe ausgeben
    Ein String der laenge 50 
    laenge zaehlen
    eingabe umgekehrt ausgeben
    Groábuchstaben zaehlen
    vokale zaehlen
    nur die konsonanten ausgeben
    kompressionsrate berechnen und ausgeben
*/
int main() {
    int max = 1000;     // laenge des Strings
    char eingabe[max];  // Eingabe
    int length = 0;     // laenge der Eingabe
        

    do {
        printf("Eingeben: ");
        fgets(eingabe, max, stdin); // liest eine String eingabe ein mit der "max" anzahl an chars

        length = strlen(eingabe);   // strlen zaehlt die laenge des Strings eingabe

        printf("Laenge des Strings = %d\n", --length);
    } while (length>50);     

    printf("Ihre Eingabe: %s[%d Zeichen]\n", eingabe, length);
    

    // umgekehrte Ausgabe
    char umkehrEingabe[length +1];
    int T = 0;
    for (int j=length; j!=-1; j--) {    // faengt bei max length an und schreibt den char an die erste Position des Strings umkehrEingabe(T)
        umkehrEingabe[T] = eingabe[j];
        printf("%s", umkehrEingabe);
        T++;
    }

    printf("\nErgebis: ");
    printf("%s", umkehrEingabe);


    // Ausgabe mit Kleinbuchstaben
    char lowEingabe[max];
    printf("\n\nUnd jetzt nochmal in klein:\n");
    for (int i=0; i<=max; i++) //Umwandlung von Groá- in Kleinbuchstaben
    {
       lowEingabe[i]=tolower(eingabe[i]);  // berprft den char [i] und lowerd ihn wenn er ein Groábuchstabe ist
    }
    
    printf("%s\n", lowEingabe); //nochmal in Kleinbuchstaben ausgeben


    int vokalZaehler = 0;
    // Z„hlen Sie die Vokale in der Eingabe
    for (int i = 0; eingabe[i] != '\0'; i++) {
        if (isVokal(eingabe[i])) {
            vokalZaehler++;
        }
    }
    printf("Die Anzahl der Vokale im Text ist: %d\n", vokalZaehler);


    // Nur die Konsonanten ausgeben
    char konsonanten[max];
    strcpy(konsonanten, eingabe);
    const char charactersToRemove[] = {'a', 'e', 'i', 'o', 'u'};
    // const char charactersToRemove[] = ("aeiou"); haette als alternative auch funktioniert 
    removeCharacter(konsonanten, charactersToRemove);

    printf("Die Eingabe der Konsonanten lautet: %s", konsonanten);
    printf("Die Laenge des Strings betraegt nun: %d", length-vokalZaehler);
    
    
    // --- bearbeitung wird verschoben bis ich Informatik lerne ---
    // kompressionsrate berechnen und ausgeben
    printf("Die Kompressionsrate betr„gt: 1:%.2f", huffmann(eingabe, konsonanten));
    
    return 0;
}


int isVokal(char zeichen) {
    // šberprfen, ob das Zeichen ein Vokal ist (nur Kleinbuchstaben)
    return (zeichen == 'a' || zeichen == 'e' || zeichen == 'i' || zeichen == 'o' || zeichen == 'u');
}

void removeCharacter(char *str, const char *charactersToRemove) {
    int i, j;
    int len = strlen(str);
    int removeLen = strlen(charactersToRemove);

    // wenn ein vokal gefunden wird, wird es mit "" ueberschrieben
    for (i = 0, j = 0; i < len; i++) {
        int isToRemove = 0;
        for (int k = 0; k < removeLen; k++) {
            if (str[i] == charactersToRemove[k]) {
                isToRemove = 1;
                break;
            }
        }

        if (!isToRemove) {
            str[j] = str[i];
            j++;
        }
    }

    // Fge das Null-Zeichen am Ende des verbleibenden Textes hinzu
    str[j] = '\0';
}

int huffmann(char string1, char string2) {
    // Huffman Codierung
    char gesamtString[];
    strcat(gesamtString, string1);
    strcat(gesamtString, string2);
    
    /*
        Gesamtstring in Symbole umwandeln
        String in Bloecken der laenge 32 speichern
        jeden block in einen Integer umwandeln
    */

}
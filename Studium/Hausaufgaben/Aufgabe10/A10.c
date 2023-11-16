#include <stdio.h>
#include <string.h>
#include <ctype.h>

int istVokal(char zeichen);
int istKonsonanten(char zeichen);

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
    } while (length<20);     

    printf("Ihre Eingabe: %s[%d Zeichen]\n", eingabe, length);
    

    // umgekehrte Ausgabe
    char umkehrEingabe[length +1];
    int T = 0;
    for (int j=length; j!=-1; j--) {    // faengt bei max length an und schreibt den char an die erste Position des Strings umkehrEingabe(T)
        umkehrEingabe[T] = eingabe[j];
        printf("%s", umkehrEingabe);
        T++;                            // 
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
        if (istVokal(eingabe[i])) {
            vokalZaehler++;
        }
    }
    printf("Die Anzahl der Vokale im Text ist: %d\n", vokalZaehler);

    // Nur die Vokale ausgeben
    /*
        in Progress
    */


    int konstonantenZaehler = 0;
    // nur die konsonanten ausgeben
    /*
        in Progress
    */


    // kompressionsrate berechnen und ausgeben
    /*
        in Progress
    */


    return 0;
}


int istVokal(char zeichen) {
    // šberprfen, ob das Zeichen ein Vokal ist (nur Kleinbuchstaben)
    return (zeichen == 'a' || zeichen == 'e' || zeichen == 'i' || zeichen == 'o' || zeichen == 'u');
}

int istKonsonanten(char zeichen) {
    // šberprfen, ob das Zeichen ein Vokal ist (nur Kleinbuchstaben)
    return (zeichen == 'b' || zeichen == 'c' || zeichen == 'd' || zeichen == 'f' || zeichen == 'g' || zeichen == 'h' || zeichen == 'j' || zeichen == 'k' || zeichen == 'l'); // bis Z
}
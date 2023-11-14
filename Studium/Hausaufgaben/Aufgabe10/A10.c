#include <stdio.h>

/*
    Aufgabe 10
    // w”rter Z„hlen
    // wenn ber 50 zeichen -> repeat
    // wenn weniger -> eingabe ausgeben

    eingabe umgekehrt ausgeben
    Groábuchstaben z„hlen
    vokale z„hlen
    nur die konsonanten ausgeben
    kompressionsrate berechnen und ausgeben
*/
int main() {
    int max = 1000;     // l„nge des Strings
    char eingabe[max];  // Eingabe
    int length;         // l„nge der Eingabe
    
    

    do {
        length = 0;
        printf("Eingeben: ");
        fgets(eingabe, max, stdin); // liest eine String eingabe ein mit der "max" anzahl an chars

        length = strlen(eingabe);   // strlen z„hlt die l„nge des Strings eingabe

        printf("L„nge des Strings = %d\n", --length);
    } while (length<50);        
    
    printf("Ihre Eingabe: %s %d\n", eingabe, length);
    
    // umgekehrte Ausgabe
    char umkehrEingabe[100];
    
	// funzt nicht richtig da char und kein int!!   char *p = eingabe + strlen(eingabe);	// Ende des Strings finden
	// funzt nicht richtig da char und kein int!!   while(p>=eingabe) {				        // solange wir nicht wieder am Anfang sind
	// funzt nicht richtig da char und kein int!!   	*umkehrEingabe++ = *--p;			// rueckwaerts kopieren, pointer weiterzaehlen
    // funzt nicht richtig da char und kein int!!   }


    // Ausgabe mit Kleinbuchstaben
    char lowEingabe[100];
    printf("\nUnd jetzt nochmal in klein:\n");
    for (int i=0; i<=max; i++) //Umwandlung von Groá- in Kleinbuchstaben
    {
       lowEingabe[i]=tolower(eingabe[i]);  // berprft den char [i] und lowerd ihn wenn er ein Groábuchstabe ist
    }
    printf("%s\n", lowEingabe); //nochmal in Kleinbuchstaben ausgeben


    return 0;
}
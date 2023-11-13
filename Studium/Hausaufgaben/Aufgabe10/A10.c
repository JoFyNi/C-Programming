#include <stdio.h>

int main() {
    int var;
    char wort;
    int counter =0;
    int varCounter = 0;
    
    do
    {   
        // w”rter Z„hlen
        // wenn ber 50 zeichen -> repeat
        // wenn weniger -> eingabe ausgeben

        // eingabe umgekehrt ausgeben
        // Groábuchstaben z„hlen
        // vokale z„hlen
        // nur die konsonanten ausgeben
        // kompressionsrate berechnen und ausgeben

        
        printf("Zahl eingeben: ");
        scanf("%d", &var);
        
        for(int i=1; i<var; i*=10)
        {
        varCounter++;                                         
        }
        printf("Zahlenlaenge: %d \n", varCounter);

        if (varCounter <= 50)
        {
            printf("Resultat Zahl: %d \n", var);
            
        } else {
            printf("Zahl eingeben: \n");
            scanf("%d", var);
        }
        
    } while (1);
    
    
    return 0;
}
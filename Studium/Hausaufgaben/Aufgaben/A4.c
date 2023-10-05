#include <stdio.h>

int main() {
    int count = 11;
    printf("Count from 0 to 10 \n");
    for (size_t i = 0; i < count; i+=2)
    {
        printf("%d \n", i);
    }
    
    printf("\nCount from 65 to 90 [Zahlen als Char ausgeben]\n");
    int sizeTwo = 91;
    for (size_t iStart = 65; iStart < sizeTwo; iStart++)
    {
        printf("%d = %c \n", iStart, iStart);
    }

    // Aufgabe 4.1
    printf("\nAusgabe der ANSI-Zeichen von 48-57 als Hexadezimalzahl und als Zeichen \n");
    int maxAnsi = 58;

    for (int iAnsi = 48; iAnsi < maxAnsi; iAnsi++)
    {   
        printf("ANSI-Zeichen NR. %d =  0x%X     %c\n", iAnsi, iAnsi, iAnsi);

    }
    
}
#include <stdio.h>

int main() {
    int weltFrieden = 17;
    char hexChar[] = "0123456789ABCDEF";

    int test = 0xF && 2;
    int resultat = 0xF; 

    printf("%d \n", resultat);
    printf("%0.2x", 0xF);
}
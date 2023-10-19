#include <stdio.h>

float a;
float b;
float c;
float result;

int main() {
    // int numberCounter = scanf("%f %f %f", &a, &b, &c); = 3

    printf("Gib eine Zahl ein: \n");
    scanf("%f", &a);

    printf("Gib eine Zahl ein: \n");
    scanf("%f", &b);

    printf("Gib eine Zahl ein: \n");    
    scanf("%f", &c);

    result = ((float)a + (float)b + (float)c) / 3;

    printf("Der Mitelwert der drei Zahlen %.2f + %.2f + %.2f = %.2f \n", a, b, c, result);
}
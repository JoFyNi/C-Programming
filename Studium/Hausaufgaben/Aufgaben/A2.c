#include <stdint.h>

float a;
float b;
float c;

int main() {
    printf("Gib eine Zahl ein: \n");
    scanf("%f", &a);

    printf("Gib eine Zahl ein: \n");
    scanf("%f", &b);

    printf("Gib eine Zahl ein: \n");    
    scanf("%f", &c);

    float result = ((float)a + (float)b + (float)c) / 3;

    printf("Der Mitelwert der drei Zahlen %.2f %s %.2f %s %.2f %s %.2f \n", a, " + ", b, " + ", c, " = ", result);
}
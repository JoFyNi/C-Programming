#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Gib eine Zahl ein: \n");
    scanf("%d", &a);

    printf("Gib eine weitere Zahl ein: \n");
    scanf("%d", &b);

    int c = a + b;
    printf("Die Summer der beiden Zahlen %d%s%d%s%d \n", a, " + ", b, " = ", c);
}
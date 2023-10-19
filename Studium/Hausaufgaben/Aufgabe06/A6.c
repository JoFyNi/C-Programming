#include <stdio.h>
#include <math.h>
// Berechnung von Kreisfl„che sowie Kugelvolumen eines Radianten von 1 bis 10
int main() {
    int Radiant = 1;
    float pie = 3.14;
    while (Radiant<=10)
    {
        float kreisSize = pow(Radiant,2)*pie;
        float kugelVolumen = (4.0/3.0) * pie * pow(Radiant,3);
        printf("Radiant: %-2d      Kreisfl„che: %-8.2f      Kugelvolumen: %.2f \n", Radiant, kreisSize, kugelVolumen);
        Radiant++;
    }
    
    // Level 2
    // 13 | 5 | 15 | 7 | 21 | ? ? ? ? ? ? | 247
    printf("Arithmetische Rechenoperationen\n");

    int iStartWert = 13;
    int wertMinu;
    while (iStartWert <= 247) {
        printf("%d", iStartWert);
        int wertMinu = iStartWert - 8;
        iStartWert = wertMinu * 3;
        printf(" - 8 = %d * 3 = %d\n", wertMinu, iStartWert);
    }
    
}
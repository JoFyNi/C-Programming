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
    
}
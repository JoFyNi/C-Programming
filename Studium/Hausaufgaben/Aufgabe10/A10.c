#include <stdio.h>

int main() {
    int var;
    int varCounter = 0;
    
    do
    {
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
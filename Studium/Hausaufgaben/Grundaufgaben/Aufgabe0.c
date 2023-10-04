#include <stdio.h>
#include <limits.h>

// String Variablen
char name[] = "Joshua Nievelstein";
char studiengang[] = "Elektrotechnik";
char eMail[] = "joshua.nievelstein@stud.hs-hannover.de";
// Integer Variablen
short zahl1= 0x7FFF;

int a = 2147483627;
int b = 50;
int BitWert = 24;

double kapitalertrag = 180.0;
double verzinsung = 2.0;

int main() {
    printf("Name: %s \n", name);
    printf("Studiengang: %s \n", studiengang);
    printf("E-Mail: %s \n", eMail);

    
    int result = check_overflow(a, b);
 
    // Overflow occurred
    if (result == -1) {
        printf("Integer overflow occurred\n");
        printf("Overflow with: %d%s%d\n", a, " and ", b);
    } 
    // No overflow
    else {
        printf("%d", result);
    }

    // Zinssatzrechnung
    double zinssatz = ((kapitalertrag*verzinsung)/100);
    printf("Der Kapitalertrag fr ein Jahr von %d%s%d%s%f \n", kapitalertrag, " Euro bei ", verzinsung, " Prozent Verzinsung ist: ", zinssatz);
 
    printf("Bit Operation [24/4] = %d\n", BitWert/4);

    return 0;
}

// Function to check integer overflow
int check_overflow(int num1, int num2)
{
    // Checking if addition will cause overflow
    if (num1 > INT_MAX - num2)
        return -1;
 
    // No overflow occurred
    else
        return num1 + num2;
}
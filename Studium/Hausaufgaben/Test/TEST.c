#include <stdio.h>
#include <stdlib.h>

void callocTest();

int main() {
    char *worte;

    worte = (char*)calloc(5, 10);

    worte[2] = "Hallo";
    worte[4] = "Bye";

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", worte[i]);
    }
    
    
    free(worte);
    return 0;
}


void callocTest() {
    int *array;
    array = (int*)calloc(5,10);

    array[1] = 1200;
    array[3] = 4400;


    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    
    
    //printf("%d", array);
    free(array);
}
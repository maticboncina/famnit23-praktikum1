#include<stdio.h>

int main(){
    int numbers[5];
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("Number on index %i: %i\n", i, numbers[i]);
    }

    printf("Drug način inicializaceije\n");    
    int other_numers[5] = {1, 2, 3, 4 ,5};

    for (int i = 0; i < 5; i++)
    {
        printf("Number on index %i: %i\n", i, other_numers[i]);
    }
    return 0;
}
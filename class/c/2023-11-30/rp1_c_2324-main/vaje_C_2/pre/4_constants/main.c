/**
    NAL: napiši program, ki od uporabnika sprejme 1 število.
    Implementiraj funckijo "multiply_by_constant", ki ji podamo to število, ta 
    pa nam število pomnoži z konstanto.
    Večje število izpiši.

    IZPIS: 
    Vpisi stevilo: 5
    Rezultat: 500
*/

#include <stdio.h>
int multiply_by_const(int number);

const int constant = 100;

int main() {
    int number;
    printf("Vpisi stevilo:");
    scanf("%i", &number);
    printf("Rezultat: %\n",multiply_by_const(number));
    return 0;
}

int multiply_by_const(int number){
    return number * constant; 
}
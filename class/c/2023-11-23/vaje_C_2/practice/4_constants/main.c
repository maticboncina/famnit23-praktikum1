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

// Function prototype declaration
int multiply_with_constant(int konstanta, int stevilo);

int main() {
    const int konstanta = 100;

    int stevilo = 0;
    printf("Vnesi cifro: ");
    scanf("%i", &stevilo);

    printf("Rezultat: %i\n", multiply_with_constant(konstanta, stevilo));
}

// Function definition
int multiply_with_constant(int konstanta, int stevilo) {
    int sum = stevilo * konstanta;
    return sum;
}

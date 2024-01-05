/**
    NAL: napiši program, ki od uporabnika sprejme število. To število naj
    predstavlja polmer kroga. Vaš program naj izračuna in izpiše obseg in 
    ploščino kroga.

    IZPIS:
    Vapiši polmer: 5
    Obseg: 31.400000
    Ploščina: 78.500000
*/
#include <stdio.h>
#define pi 3.14

int main() {
    printf("Vpiši polmer: ");
    int r;
    scanf("%i", &r);
    printf("Obseg: %lf\n", 2*r*pi);
    printf("Ploščina: %lf\n", pi*r*r);
    return 0;
}
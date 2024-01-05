/*
    NAL: Od uporabnika preberi 2 števili in jih shrani v 2 spremenljivki 
    (num_a in num_b). Zamenjaj vrednosti spremenjlivk tako, da je manjša 
    vedno v spemenljivki num_a in večja v num_b. Spremenljivki izpiši.
    Za zamenjavo implementiraj funkcijo z imenom sorted_swap, ki prejme 
    spremenljivki in naredi zamenjavo.

    IZPIS: 
    Vnesi prvo stevilo: 8
    Vnesi drugo stevilo: 3
    num_a: 3
    num_b: 8
*/
#include<stdio.h>
void sorted_swap(int* pNumberA, int* pNumberB);

int main() {
    int num_a;
    printf("Vnesi prvo število: ");
    scanf("%d", &num_a);
    int num_b;
    printf("Vnesi drugo število: ");
    scanf("%d", &num_b);
    sorted_swap(&num_a, &num_b);
    printf("num_a: %d\n", num_a);
    printf("num_b: %d\n", num_b);
    return 0;
}

void sorted_swap(int* pNumberA, int* pNumberB) {
    if (*pNumberA > *pNumberB){
        int temp = *pNumberA;
        *pNumberA = *pNumberB;
        *pNumberB = temp;
    }
}
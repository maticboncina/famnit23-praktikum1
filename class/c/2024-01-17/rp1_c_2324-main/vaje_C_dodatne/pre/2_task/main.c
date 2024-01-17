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
  int num_a, num_b;
  printf("Vnesi prvo spremenljivko: ");
  scanf("%i", &num_a);
  printf("Vnesi drugo stevilo: ");
  scanf("%i", &num_b);
  sorted_swap(&num_a, &num_b);
  printf("num_a: %i\n", num_a);
  printf("num_b: %i\n", num_b);
}

void sorted_swap(int* pNumberA, int* pNumberB) {
   if (*pNumberA > *pNumberB)
   {
    int tmp = *pNumberA;
    *pNumberA = *pNumberB;
    *pNumberB = tmp;
   }
}
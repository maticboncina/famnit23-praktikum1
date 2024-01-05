/**
 * NAL: Inicializiraj polje vsaj 10 števil. Napiši funkcijo, ki sprejme 
 * polje števil, funkcija naj izračuna povprečno število v polju. Za 
 * shranjevanje povprečnega števila uporabi kazalce (pointerje).
 * 
 * V nadaljevanju je predstavljena osnovna struktura, ki vam bo v pomoč. 
 * 
 * Vaša naloga je dokončati funkcijo calc_avg. Funkcija mora uporabljati kazalce!
 * 
 * IZPIS:
 * Povprecje: 15.900000
*/


#include <stdio.h>

void calc_avg(int numbers[10], double* p_avg);

int main() {
    int polje[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double p_avg = 0;
    calc_avg(polje, &p_avg);
    printf("Povprečje: %lf\n", p_avg);
    return 0;
}


void calc_avg(int numbers[10], double* p_avg) {
    int sum = 0;
    for (int i = 0; i < 10; i++){
        sum += numbers[i];
    }
    *p_avg = sum / 10.0;
}
/**
 * NAL: Inicializiraj polje vsaj 10 števil. Napiši funkcijo reverse, ki 
 * sprejme polje števil, funkcija naj obrne zaporedje števil v polju. 
 * Pravtako implementiraj funkcijo swap, ki s pomočjo kazalcev(pointerjev) 
 * zamenja vrednosti števil naslovov dveh spremenjivk. Pravtako za uporabo 
 * definiraj konstanto NUM_AMOUNT, ki predstavlja velikost polja števil.
 * 
 * IZPIS:
 * 1 2 3 4 5 6 7 8 9 10
 * 10 9 8 7 6 5 4 3 2 1
*/

// definiraj in inicializiraj polje 
// pripravi izpis:  1 2 3 4 5 6 7 8 9 10
// klici reverse 
// pripravi izpiis 10 9 8 7 6 5 4 3 2 1

#include <stdio.h>

const int NUM_AMOUNT = 10;
void reverse(int nums[10]);
void swap(int* pa, int* pb);
void print_array(int nums[NUM_AMOUNT]);


int main() {
    int nums[NUM_AMOUNT] = {1,2,3,4,5,6,7,8,9,10};
    print_array(nums);
    reverse(nums);
    print_array(nums);
}

void print_array(int nums[NUM_AMOUNT]){
    for (int i = 0; i < NUM_AMOUNT; i++){
        printf("%i ", nums[i]);
    }

    printf("\n");
}

void reverse(int nums[NUM_AMOUNT]) {
    //swap (nums[0+i],nums[NUM_AMOUNT-1-i])
    for (int i = 0; i < NUM_AMOUNT/2; i++){
        swap(&nums[i], &nums[NUM_AMOUNT-1-i]);
    }
}

void swap(int* pa, int* pb) {
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
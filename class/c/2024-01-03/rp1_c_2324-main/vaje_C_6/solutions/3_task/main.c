/**
    NAL: Vprašaj uporabnika za poljubno pozitivno celo število. 
    Program naj izpiše vsa liha števila do tega števila ločena 
    s presledki.
    
    IZPIS:
    Vnesi število: 25
    1 3 5 7 9 11 13 15 17 19 21 23 
*/
#include <stdio.h>

int main() {
    int max;
    printf("Vnesi število: ");
    scanf("%i", &max);
    for (int i = 0; i < max; i++){
        if (i % 2 == 1){
            printf("%i ", i);
        }
        
    }
    printf("\n");
    
    return 0;
}
/**
    NAL: Ustvarite nov program C in definirajte funkcijo z imenom "bounds". Funkcija naj
    prejme 4 argumente. Prvi argument naj bo polje števil (int array) in drugi argument 
    njegova dolžina. Tretji in četrti argument pa naj bosta kazacla na spremenjlivki tipa 
    int. V prvega od teh shrani vrednost najmanjšega elementa polja, v drugega pa največjega.
    V main funkciji definiraj polje, ki je velikost vsaj 10 elementov, ter spremenjlivki max
    in min. Pokliči funkcijo "bounds" in izpiši vrednosti min in max.

    IZPIS:
    Najmanjša vrednost: -120
    Največja vrednost: 75

    Dodatno: Ustvari funkcijo, ki bo normalizirala polje (array) v območje vrednosti (0 -> 1).
*/

#include <stdio.h>
void bounds(int polje[], int len, int *min, int *max);

int main(){
    int max = 0;
    int min = 0;
    int polje[10] = {1, 2, -120, 5, 4, 3, 75, 1, 2, 3};
    
    bounds(polje, 10, &min, &max);

    printf("Najmanjša vrednost: %i\n", min);
    printf("Najmvečja vrednost: %i\n", max);

    return 0;
}

void bounds(int *polje, int len, int *min, int *max){

    for (int i = 0; i < len; i++){
        *min = *polje;

        if(*min > *polje){
            *min = *polje;
        }

        if(*max > *polje){
            *max = *polje;
        }
    }
}
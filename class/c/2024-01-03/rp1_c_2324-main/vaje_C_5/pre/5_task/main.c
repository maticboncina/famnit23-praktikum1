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

//1. main
//2. definal polej 10 elementov, def min in max spremenljivki
//3. void bounds(int poljell, int len, int* min, int* max)
// 3.1 for 0-len
//  if(max<polje[i])
//  novi max => max = polje[i]
//  if(min>polje[i])
//  novi min => min = polje [i]
//4. poklica bounds
//5. Izpisat vrednosti min in max

#include <stdio.h>
int main(){
int polje[10] = {1, 2, 3, 4, -120, 75, 3, 56, 67, 3};
int max = 0;
int min = 0;

return 0;
}
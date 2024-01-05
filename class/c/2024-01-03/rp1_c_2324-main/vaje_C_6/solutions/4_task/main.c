/**
    NAL: Napiši program, ki vsakič ko ga zaženemo generira novo polje števil.
    Polje naj bo dolžine 10 števila pa naj bodo omejena do 10000. Kot seme 
    naključja (seed) lahko uporabite "time(NULL)" ali vnos uporabnika. Nato 
    program polje izpiše. Uporabi funkciji sradn() in rand().

    The C library function void srand(unsigned int seed) seeds the random 
    number generator used by the function rand.


    NOTE: time() funkcijo lahko uporabljamo, če v program vključimo time.h

    IZPIS:
    [ 8455 986 8098 1075 8967 9126 5741 4679 5321 5682 ]

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int polje[10];
    for (int i = 0; i < 10; i++){
        polje[i] = rand() % 10000;
    }
    printf("[ ");
    for (int i = 0; i < 10; i++){
        printf("%d ", polje[i]);
    }
    printf("]\n");
    return 0;
}
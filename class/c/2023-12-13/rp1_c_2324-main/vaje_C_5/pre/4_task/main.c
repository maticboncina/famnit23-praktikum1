/**
    NAL: Ustvarite nov program C in definirajte funkcijo z imenom swap, ki kot argumente 
    sprejme dva kazalca(pointerja) na int vrednosti in zamenja njuni vrednosti. V glavni 
    (main) funkciji vašega programa definirajte dve int spremenljivki z imenom x in y ter 
    ju inicializirajte na različne vrednosti. Izpiši vrednosti obeh spremenljivk in nato
    pokliči funkcijo swap. Po funkciji ponovno izpiši vrednosti spremenljivk.

    IZPIS:
    Zacetna vrednost: (10 | 40)
    Koncna vrednost: (40 | 10)
*/
#include <stdio.h>

void swap(int *num1, int *num2);


int main(){
    int x = 10;
    int y = 40;
    printf("Zacenta crednost: (%i | %i)\n", x, y);
    swap(&x, &y);
    printf("Končna vrednost: (%i | %i)\n", x, y);
    

    return 0;
}

void swap(int *num1, int *num2){
    int *tmp = *num1;
    *num1 = *num2;
    *num2 = *tmp;
}


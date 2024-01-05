/**
    NAL: Vprašaj uporabnika za poljubno pozitivno celo število. 
    Program naj nato vpraša uporabnika za tolikšno število poljubnih celih števil.
    Program naj izpiše vsa števila vpisana števila ločena s presledki. Za implementacijo
    polj uporabi samo kazalce.
    
    IZPIS:
    Koliko števil želiš vnesti: 4
    Vnesi število 1: 32
    Vnesi število 2: 5
    Vnesi število 3: 19
    Vnesi število 4: 4
    32 5 19 4
*/

#include <stdio.h>

int main(){
    printf("Koliko števil želiš vnesti: ");
    int len;
    scanf("%i", &len);
    int polje[len];
    int* p_polje = &polje[0];
    // for (int i = 0; i < len; i++){
    //     printf("Vnesi število %i: ", i + 1);
    //     scanf("%d", p_polje);
    //     p_polje++;
    //     printf("\n");
    // }
    for (int i = 0; i < len; i++){
        printf("Vnesi število %i: ", i + 1);
        scanf("%d", p_polje+i);
    }
    
    // p_polje = &polje[0];
    // for (int i = 0; i < len; i++){
    //     printf("%d ", *p_polje);
    //     p_polje++;
    // }
    for (int i = 0; i < len; i++){
        printf("%d ", *(p_polje+i));
    }
    printf("\n");
    return 0;
}
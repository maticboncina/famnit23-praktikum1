/**
    NAL: definiraj spremenljivko "crka", ki je tipa character. Program naj
    za poljubno crko spremeni njeno velikost. V kolikor je crka mala, naj 
    jo spremeni v veliko in obratno (a -> A | A -> a)

    IZPISA:
    Crka pred spremembo: b
    Crka po spremembi: B

*/
#include <stdio.h>

int main() {
    char crka = 'a';
    printf("Crka pred spremembo %c\n", crka);
    if(crka<97){
        crka+=32;
    }else{
        crka-=32;
    }
    printf("Crka po spremembi %c\n", crka);

}    
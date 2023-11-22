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
    char crka;

    printf("Vpisi crko: ");
    scanf("%c", &crka);

    if (crka >= 'a' && crka <= 'z') {
        crka = crka - ('a' - 'A');
    } else if (crka >= 'A' && crka <= 'Z') {
        crka = crka + ('a' - 'A');
    }

    printf("Crka po spremembi: %c\n", crka);

    return 0;
}
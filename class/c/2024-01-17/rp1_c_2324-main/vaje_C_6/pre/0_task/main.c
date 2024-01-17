/**
    NAL: Napiši program za okvirno ocenjevanje domače naloge. Program študenta vpraša
    po posameznih kosih domače naloge in nato prikaže točke. Uporabnik lahko odgovori 
    z "Da", "Ne" ali "Približno", tako da vpiše črke 'd', 'n' ali 'p'. Če uporabnik 
    na vsa vprašanja odgovri z "Da", program uporabnika tudi vpraša, če je opravil 
    dodaten del naloge, ki prinese bonus točke. Če študent odgovori z "Da" naj dobi 2 točki,
    če odgovri z "Ne" 0 točk, če pa z "Probljižno" pa 1. 

    V nadaljevanju je predstavljena osnovna struktura, ki vam bo v pomoč. 

    Vaša naloga je dokončati funkcijo question. Funkcija mora uporabljati kazalce!
    
    IZPIS:
    Mogoči odvogori na vprašanja (d-Da | n-Ne | p-približno)
    Ali program opravi obvezni del naloge? c
    Ali si uporabljal funkcije? d
    Ali si uporabljal lokalne spremenljivke in ne globalne? d
    Ali si preveril validnost vnosov? d
    Ali si uporabljal komentarje? d
    Ali si implementiral dodatni del naloge? d
    Predvideno število točk je okrog 12.
*/

#include <stdio.h>
#include <stdbool.h>


void question(char prompt[], int* points, bool* everythingDone);

int main() {
    bool everythingDone = true;
    int points = 0;
    //...
}


void question(char prompt[], int* points, bool* everythingDone) {
    //...    
}
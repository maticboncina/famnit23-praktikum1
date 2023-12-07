/**
NAL: Caesar cipher: Napiši program, ki od uporabnika sprejme string (niz besed). 
    V programu implementirajte funkciji "encode" in "decode", ki kriptirata in dekriptirata
    dan uporabnikov niz. Obe funkciji sprejmeta string (polje črk) in število, ki predstavlja
    zamik črk, vračata pa ničesar.

    IZPIS: 
    What do you want me to encode: test
    Encoded:
    yjxy
    Decoded:
    test

    Dodatno 1: Ustvari uporabniški vmesnik.

    IZPIS ENCODE: 
    What do you want me to encode/decode: test
    Set offset: 5
    Select option
    0.) Encode
    1.) Decode
    0
    Encoded:
    yjxy
    
    IZPIS DECODE:
    What do you want me to encode/decode: yjxy
    Set offset: 5
    Select option
    0.) Encode
    1.) Decode
    1
    Decoded:
    test 

    Dodatno 2: Ustvari vmesnik z argumenti v ukazni vrstici.

*/

#include <stdio.h>

int main(){
    char sporocilo[100];
    printf("Vnesi sporocilo, ki ga zelis dekriptirati\n");
    scanf("%s", sporocilo);

    int zamik = 0;
    printf("Vnesi zamik, da sporočilo dešifriraš\n");
    scanf("%i", zamik);



    printf("Dekodirano sporocilo je: \n");
    
    printf("Enkodirano sporocilo je: \n");

    return 0;
}

void encode(char sporocilo[]){

}

void decode(){

}
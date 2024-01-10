/**
NAL: Caesar cipher: Napiši program, ki od uporabnika sprejme string (niz besed). 
    V programu implementirajte funkciji "encode" in "decode", ki kriptirata in dekriptirata
    dan uporabnikov niz. Obe funkciji sprejmeta string in ofset. Slednje predstavlja
    zamik črk. Funkciji ne vračata ničesar.

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
/**
NAL: Caesar cipher: Napiši program, ki od uporabnika sprejme string (niz besed). 
    V programu implementirajte funkciji "encode" in "decode", ki kriptirata in dekriptirata
    dan uporabnikov niz. Obe funkciji sprejmeta string (polje črk) in število, ki predstavlja
    zamik črk, vračata pa ničesar.

    IZPIS: 
    What do you want me to encode: Hello, my name is Domen!
    Encoded:
    C`ggj't\h`njh`i
    Decoded:
    Hello, my name is Domen!

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
#include <stdlib.h>
#include <string.h>

void encode(unsigned char  str[], int offset);
void decode(unsigned char str[], int offset);

int main(int argc, char *argv[]) {
    int offset = 3;
    int option = 0;

    unsigned char input[30]= "test";
    if(argc != 4){
        printf("What do you want me to encode/decode: ");
        fgets(input, sizeof(input), stdin);

        printf("Set offset: ");
        scanf("%i", &offset);
        
        printf("Select option\n");
        printf("0.) Encode\n");
        printf("1.) Decode\n");
        scanf("%i", &option);
    }else{
        offset = atoi(argv[1]);
        option = atoi(argv[2]);   
        strcpy(input, argv[3]);
    }
    
    if(option){
        decode(input, offset);
        printf("Decoded:\n%s\n", input);
    }else{
        encode(input, offset);
        printf("Encoded:\n%s\n", input);
    }    
}

void encode(unsigned char str[], int offset) {
    int index = 0;
    while (str[index] != '\0') {
        str[index] += offset;
        index++;
    }
}

void decode(unsigned char str[], int offset) {
    int index = 0;
    while (str[index] != '\0') {
        str[index] -= offset;
        index++;
    }
}
/**
 * NAL: Inicializiraj niz (string) texta lorem ipsum. 
 * 
 * Uporabnika vprašaj za poljubno črko. 
 * 
 * Napiši funkcijo, ki sprejme ta niz, črko in naslov spremenljivke v katero naj shrani število ponovitev tega znaka v danem nizu.
 * 
 * Program je na voljo in ga lahko preizkusiš. 
 * 
 * V nadaljevanju je predstavljena osnovna struktura, ki vam bo v pomoč. 
 * 
 * Vaša naloga je dokončati zastavljene funkcije.
 * 
 * IZPIS:
 * Vpiši črko: s
 * St. pojavitev: 39
 * 
*/
#include <stdio.h>

void count(char string[], char crka, int* p_counter);

int main() {
    // nastavimo string textov
    char str[] = "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.";

    // inicializiramo potrebne spremenljivke
    int stevec = 0;
    char crka;

    // naredimo console flow
    printf("Vpisi crko: \n");
    scanf(" %c", &crka); // s presledkom se znebimo karkoli bufferja - Ne vem zakaj, ampak to smo rekli, na zadnji uri, da uporabimo c %c

    // kličemo funkcijo count in si rezultat izpišemo
    count(str, crka, &stevec); // dobi refertenco v pomnilniku kje je ta vrednost, ker smo stevec inicializirali kot pointer
    printf("St. pojavitev: %d\n", stevec);

    return 0;
}

void count(char string[], char crka, int* stevec) {
    // gledamo celi string "crko po crko" (z string[i]) do line terminatorja
    for (int i = 0; string[i] != '\0'; i++) {
        // če se roportija matcha črki, ki jo iščemo 
        if (string[i] == crka) {
            (*stevec)++; //* nastavi vrednost števca na naslov števca
        }
    }
}
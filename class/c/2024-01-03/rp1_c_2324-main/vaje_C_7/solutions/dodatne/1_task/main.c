/*
    NAL: Vprašaj uporabnika, naj vpiše besedo.
    Izpiši zadnjo črko besede. 
    
    IZPIS:
    Vpisi besedo: blablabla
    Zadnja crka: a
    
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Vpiši besedo: ");
    scanf("%s", &str[0]);
    for (int i = 0; i < 100; i++){
        if (str[i] == '\0'){
            printf("Zadnja črka: %c\n", str[i - 1]);
            break;
        }   
    }
    // char zadnja = str[10];
    printf("Zadnja črka: %c\n", str[strlen(str) - 1]);
    return 0;
}
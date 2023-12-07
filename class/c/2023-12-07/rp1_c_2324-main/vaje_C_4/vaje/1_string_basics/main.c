#include <stdio.h>

int main(){
    char first_string[] = "c string";
    printf("Izpis stringa: %s\n", first_string);

    char second_string[50] = "this is a string with 50 chars.";
    int i = 0;
    printf("Izpis po znakih\n");
    while (second_string[i] != '\0'){
        printf("%c", second_string[i]);
        i++;
    }

    return 0;
}
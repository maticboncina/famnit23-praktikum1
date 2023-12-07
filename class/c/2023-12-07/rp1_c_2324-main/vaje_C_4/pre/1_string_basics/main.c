#include <stdio.h>

int main() {
    char first_string[] = "c string";


    char long_string[50] = "abcd";

    char array_string[] = {'a', 'b', 'c', 'd', '\0'};

    for (int i = 0 ; i < 5 ; i++) {
        printf("[%c] ", array_string[i]);
    }
}
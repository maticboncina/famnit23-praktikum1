#include <stdio.h>

void cloneString(char from[], char to[]);

int main() {
    char a[40] = "bla blabla bla";
    char b[20] = "HEY";

    cloneString(a, b);
    printf("%s\n", a);
}

void cloneString(char from[], char to[]) {
    int index = 0;
    int end = 0;
    while (from[end] != '\0') {
        end++;
    }   
    while (to[index] != '\0') {
        from[index + end] = to[index];
        index++;
    }
}
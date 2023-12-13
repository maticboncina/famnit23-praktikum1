#include <stdio.h>
void displayString(char str[]);

int main() {
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);     // Passing string to a function.    
}

void displayString(char str[]) {
    //printf("%s", str);
    int index = 0;
    while (str[index] != '\0') {
        printf("%c", str[index]);
        index++;
    }
}
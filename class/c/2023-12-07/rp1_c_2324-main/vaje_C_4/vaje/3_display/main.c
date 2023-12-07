#include <stdio.h>
void concatString (char from[], char to[]);

int main(){

    char a[60]="This is a string a";
    char b[20]="This is a string a";

    printf("This is concatinated print: \n", a);
    return 0;
}

void concatString (char from[], char to[]){
    int i = 0;
    while (to[i] != '\0'){
        i++;
    }
    int j = 0;
    while(from[j] != '\0'){
        to[i+j+1] = from[j];
        j++;
    }
}
#include <stdio.h>

int * max(int *num1, int *num2);
int main(){
    
    int st1 = 5;
    int st2 = 10;
    int * bigger = max(&st1, &st2);
    st2 = 3;
    bigger = max(&st1, &st2);

    printf("Bigger number is: %i\n", *bigger);
    return 0;
}

int * max(int *num1, int *num2){
    if (*num1 > *num2){
        return num1;
    }
    else{
        return num2;
    }
}
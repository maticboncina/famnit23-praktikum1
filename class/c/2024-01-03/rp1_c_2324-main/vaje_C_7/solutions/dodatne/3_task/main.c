/*
    NAL: Od uporabnika preberi 2 števili. Program naj sešteje 
    pozitivna liha števila med njima. 

    IZPIS: 
    Vnesi prvo stevilo: 10
    Vnesi drugo stevilo: 2
    Vsota lihih stevil: 24
*/
#include <stdio.h>

int oddSum(int lowerBound, int upperBound);
void swap(int* pNumberA, int* pNumberB);

int main() {
    int numA;
    int numB;
    printf("Vnesi prvo število: ");
    scanf("%d", &numA);
    printf("Vnesi drugo število: ");
    scanf("%d", &numB);
    swap(&numA, &numB);
    printf("Vsota lihih števil: %d\n",oddSum(numA, numB));
    return 0;

   
}

void swap(int* pNumberA, int* pNumberB) {
    if (*pNumberA > *pNumberB){
        int temp = *pNumberA;
        *pNumberA = *pNumberB;
        *pNumberB = temp;
    }
}

int oddSum(int lowerBound, int upperBound) {
    int sum = 0;
    for (int i = lowerBound; i < upperBound; i++){
        if (i % 2 == 1){
            sum = sum + i;
        }
    }
    return sum;
}
/**
    NAL: Naključno generiraj n števil z vrednostmi med 0 in 99 in jih 
    shrani v endimenzionalno polje. Števila uredi po velikosti in jih 
    izpiši, kot je prikazano. 

    IZPIS: n = 10;
    [ 7 49 73 58 30 72 44 78 23 9 ]
    [ 7 9 23 30 44 49 58 72 73 78 ]

    IZPIS: n = 20;
    [ 7 49 73 58 30 72 44 78 23 9 40 65 92 42 87 3 27 29 40 12 ]
    [ 3 7 9 12 23 27 29 30 40 40 42 44 49 58 65 72 73 78 87 92 ]
*/

#include <stdio.h>
#include <stdlib.h>

int generateRandomNumber();
int bubbleSort(int *array, int n);
int izpisiPolje(int *array, int n);

int main(){

    // inicializiramo polje s številom elementov, ki ga določi uporabnik
    int n;
    printf("Vnesi stevilo: \n");
    scanf("%d", &n);
    int polje[n];

    // dajemo notri random stevilke na polje i
    for(int i = 0; i < n; i++){
        polje[i] = generateRandomNumber();
    }

    // izpisemo polje
    izpisiPolje(polje, n);

    // sortiramo polje
    bubbleSort(polje, n);

    // izpisemo polje
    izpisiPolje(polje, n);

    return 0;
}

// funkcija, ki generira naključno polje
int generateRandomNumber(){
        int randomNumber = rand()%100;
        return randomNumber;
}

// bubble sort
int bubbleSort(int *array, int n){
    int zacasnoStevilo;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(array[j] > array[j+1]){
                zacasnoStevilo = array[j+1];
                array[j+1] = array[j];
                array[j] = zacasnoStevilo;
            }
        }
    }

    return 0;
}

int izpisiPolje(int *array, int n){
    printf("[ ");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");

    return 0;
}
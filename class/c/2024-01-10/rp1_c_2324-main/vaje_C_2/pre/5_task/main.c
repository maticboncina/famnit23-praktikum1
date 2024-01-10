/**
    NAL: Napiši program, ki n-krat šteje do vrednosti spremenljivke k.
    program naj kliče funkcijo "count", ki sprejme en argument, 
    ki predstavlja zgornjo mejo štetja (do kam preštejemo).
    
    IZPIS za n=4 k=20:
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

    IZPIS za n=3 šteje k=10:
    1 2 3 4 5 6 7 8 9 10 
    1 2 3 4 5 6 7 8 9 10 
    1 2 3 4 5 6 7 8 9 10 

    DODATNA NALOGA: Poskusi problem rešiti z uporabo le ene for zanke. 
    Ali je to morda mogoče z uporabo rekurzije?
*/

#include <stdio.h>
// void count(int bound);
void count(int bound, int counter);
int main() {
    int n = 5;
    int k = 10;
    for (int i = 0; i < n; i++)
    {
        count(k,1);
    }    
}

void count(int bound, int counter){
    printf("%i ", counter);
    counter++;
    if(counter > bound){
        printf("\n");
        counter=1;
        return;
    }
    count(bound, counter);
}

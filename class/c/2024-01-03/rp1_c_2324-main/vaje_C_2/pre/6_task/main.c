/**
    NAL: napiši program, ki uporabniku pretvori km/h v m/s in obratno.
    Uporabnik smer pretvorbe izbere z vnosom št. 1 ali 2.
    Implementiraj funckiji (to_kmh in to_mps) za pretvorbo ter za pretvorbo uporabljaj konstante.
    1 m/s = 3.6 km/h
    
    IZPIS:
    Izberi smer pretvorbe:
    1) kmh -> mps
    2) mps -> kmh
    2
    Vpiši količino: 1
    Kmh: 3.600000
*/
#include <stdio.h>
/*
    deklaracije funkcije
*/
double to_mps(double num);
double to_kmh(double num);

/*
    inicializacija globalnih konstant
*/ 
const double COEFICIENT = 3.6;

/*
    inicializacija funkcij
*/
int main() {
    int direction;
    double ammount;
    
    printf("Izberi smer pretvorbe:\n");
    printf("1) kmh -> mps\n");
    printf("2) mps -> kmh\n");
    scanf("%i", &direction);
    
    printf("Vpiši količino: ");
    scanf("%lf", &ammount);

    if (direction == 1) {
        printf("Mps: %lf\n", to_mps(ammount));
    } else if (direction == 2) {
        printf("Mps: %lf\n", to_kmh(ammount));
    } else {
        printf("Napacen vnos!\n");
    }
}

double to_mps(double num) {
    return num / COEFICIENT;
}

double to_kmh(double num) {
    return num * COEFICIENT;
}
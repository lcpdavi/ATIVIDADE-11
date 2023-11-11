#include<stdio.h>

double calcularVolumeC( double alt, double raio);

int main(){

    double r = 10, a = 5;
    double res = calcularVolumeC(a, r);

    printf("o volume e: %lf", res);
}

double calcularVolumeC( double alt, double raio){
    double PI = 3.1415;
    double volumeC = PI * (raio * raio) * alt;
    return volumeC;
}

#include<stdio.h>

float converter(float TemperaturaF){
    float celsius = (TemperaturaF - 32.0) * (5.0/9.0);
    return celsius;
}

int main(){

    float resultado = converter(100.0);
    printf("Celsius: %.2f", resultado);


}

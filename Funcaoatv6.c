#include<stdio.h>

float calcularIMC(float altura, float peso);
void mostrarSituacao(float);


int main(){
    float peso, altura, imc;
    printf("Digite o peso:\n");
    scanf("%f", &peso);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    imc = calcularIMC(altura, peso);
    mostrarSituacao( imc );

}

float calcularIMC(float altura, float peso){
    float imc = peso / (altura * altura);
    return imc;

}
void mostrarSituacao(float imc){
    if( imc < 16){
    printf("Situacao abaixo do peso ideal:");

    }else if( imc >= 16 && imc < 25){
        printf("situacao: Normal");

    }else{
        printf("Acima do peso");
    }

}

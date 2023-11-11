#include<stdio.h>
#include<math.h>

//procedimento(funcao sem retorno)

void calcularVolumeE(){
    float raio, PI = 3.1415;
    printf("Digite o valor do raio:\n");
    scanf("%f", &raio); 
    float volumeE = (4 * PI * pow( raio, 3))/3;
    printf("O volume da esfera e: %f", volumeE);
}

int main(){
    calcularVolumeE();
}

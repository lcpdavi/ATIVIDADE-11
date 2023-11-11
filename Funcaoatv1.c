#include<stdio.h>
//definicao e implementacao

int maiorNumero(int n1, int n2){

   if(n1 > n2){
      return n1;
   }else{
      return n2;
   }
}


int main(){

   int num1, num2;

   printf("Digite os numeros:\n");
   scanf("%d %d", &num1, &num2);

   int resultado = maiorNumero(num1, num2);

   printf("o resultado e: %d", resultado);
}

#include <stdio.h>
#include <math.h>
/* Autor Nathan Lisboa
Objetivo- Faça um programa para calcular e imprimir o valor de Y, dado um valor de X: .
Data: 12/09/2022*/

int main(void) {
  //Declaração de variáveis
  float x,y;

  //Leitura do valor x

  printf("Digite um valor para x:");
  scanf("%f",&x);

  //Resultado de Y para as condições para os valores de x

  if (x<=1)
  {
    y=1;
    printf("%.2f",y);
  }
  else if (x>1 && x <=2)
  {
    y=2;
    printf("%.2f",y);
  }
  else if (x >2 && x<=3)
  {
    y=pow(x,2);
    printf("%.2f",y);
  }
  else if (x>3)
  {
    y=pow(x,3);
    printf("%.2f",y);
  }
  
  return 0;
}
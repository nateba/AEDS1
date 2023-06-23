#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Faça um programa para ler os coeficientes de uma equação do primeiro grau (ax + b = 0), 
calcular e escrever a raiz da equação.
Data: 12/09/2022*/

int main(void) {
  //Declaração de variáveis
  int a,b,x;

  //Leia uma equação
  printf("Digite os valores de a e b na equação");
  scanf("%d %d",&a, &b);
 //Calcular o resultado
  x = -b/a;
  printf("A raiz da equação é: %d",x);
  
  
  
  return 0;
}
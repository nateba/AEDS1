#include <stdio.h>
/*
  Autor - Nathan Lisboa
  Objetivo - Ler um número L e exibir os elementos menores que L série de
  Fibonacci
  Data - 19/09/2022
*/
int main(void) {
  // Declaração de variáveis
  int num1 = 0, num2 = 1, L, proximonum = 0, i;

  // Ler a variável L
  printf("Escreva um número:\n");
  scanf("%d", &L);
 //Condicional para printar os valores de fibonatti menores que L

  for (i = 3; i <= L; i++) {
    proximonum = num1 + num2;

    num1 = num2;
    num2 = proximonum;

    if(proximonum<L&&proximonum>0)
      printf("%d\n", proximonum);
  }
  return 0;
}
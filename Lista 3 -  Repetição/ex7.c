#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo= Faça  um  programa  que  imprima  os  L  primeiros  elementos  da
série  de  Fibonacci.  Por exemplo,  se  o  usuário  digitou  o  número  40,
deverão  ser  apresentados  os  40  números  da sequência na tela. Data
19/09/2022*/
int main(void) {
  // Declaração de variáveis
  int num1 = 0, num2 = 1, N, proximonum = 0, i = 1;

  // Ler o numero de termos
  printf("Escreva o número de termos da sequencia fibonati que voce quer :\n");
  scanf("%d", &N);

  for (i = 1; i <= N; i++) {
    proximonum = num1 + num2;
    printf("%d-", proximonum);
    num1 = num2;
    num2 = proximonum;
  }
  return 0;
}
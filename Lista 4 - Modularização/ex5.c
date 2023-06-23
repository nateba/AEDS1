#include <stdio.h>
/* Nathan Lisboa / 17/10 
Faça uma função recursiva que calcula o valor de S da série a seguir para n > 0: 
 
            S = 1/1! + 1/2!  + 1/3! + ...+1 /N! 
 
double serie (int n) */


#include <stdio.h>
//Função calculadora de fatorial
int fatorial(int num) {
  int fat = 1;
  while (num >= 1) {
    fat *= num;
    num--;
  }
  printf("%d\n", fat);
  return (fat);
}
//Função calculadora da soma
double serie(int n) {
  if (n == 1) {
    return (1);
  } else {
    return (((double) 1 / fatorial(n)) + serie(n - 1));
  }
}

int main(void) {
  //Declaração de variáveis
  int N;
  double S;
  //Escreva o número de termos
  printf("Digite o número de termos:\n");
  scanf("%d", &N);
  if (N <= 0) {
    printf("Valor inválido\n");
    //Resultado da expressao
  } else {
    S = serie(N);
    printf("O valor da soma é: %.2lf\n", S);
  }
}
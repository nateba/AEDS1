#include <stdio.h>
/* Nathan Lisboa / 17/10
Faça uma função recursiva que calcula a divisão usando subtrações sucessivas:
int divisao (int numerador, int denominador)
Faça  um  programa  principal  que  leia  dois  números,  acione  a  função  e
exiba  o  resultado gerado. */
// Função que faz divisao com subtrações sucessivas
int divisor(int numerador, int denominador) {
  if (numerador / denominador == 0) {
    return 0;
  } else {
    return (1 + divisor(numerador - denominador,denominador));
  }
}
int main(void) {
  // Declaração de variaveis
  int numerador, denominador;
  // Digite um número
  printf("Digite um número inteiro para o numerador:\n");
  // Leitura do numerador
  scanf("%d", &numerador);
  // Digite um número
  printf("Digite um número inteiro para o denominador:\n");
  // Leitura do denominador
  scanf("%d", &denominador);
  // Exibição do resultado
  printf("A divisao dos dois números é %d\n", divisor(numerador, denominador));

  return 0;
  }
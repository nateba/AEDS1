#include <stdio.h>
/* Nathan Lisboa / 17/10
Faça uma função recursiva que calcula o resto da divisão usando subtrações sucessivas: 
int resto (int numerador, int denominador) 
Faça  um  programa  principal  que  leia  dois  números,  acione  a  função  e  exiba  o  resultado 
gerado. */
int resto(int numerador, int denominador) {
  if (numerador/denominador==0) {
    return (numerador);
  } else {
    return (resto(numerador - denominador,denominador));
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
  printf("O resto da divisão dos dois é %d\n", resto(numerador, denominador));

  return 0;
  }
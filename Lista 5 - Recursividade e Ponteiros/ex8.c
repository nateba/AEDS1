#include <stdio.h>
#include<math.h>
/*Autor Nathan Lisboa
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  
 
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3) 
 
Faça um programa que leia N e imprima o valor retornado pela função.
Data:26/09/2022*/
// Criar a função
float Soma(int n) {
  // Criar as variáveis
  float numerador, denominador, divisao, S = 0;

  // Criar a repetição para o número n de vezes
  for (int i = 1; i <= n; i++) {
    numerador = pow(i, 2) + 1.0;
    denominador = i + 3.0;
    divisao = numerador / denominador;

    S += divisao; // Calcular a soma em cada repetição
  }

  return S; // Retornar o valor S
}

int main(void) {
  // Declarar as variáveis
  int N;

  // Ler a variável
  printf("Digite um valor inteiro e positivo N: ");
  scanf("%d", &N);

  if (N > 0)
    printf("\nA soma S vale %.2f\n", Soma(N)); // Exibir o resultado da função
  else
    printf("\nValor inválido.\n"); // Caso o N não seja válido

  return 0;
}
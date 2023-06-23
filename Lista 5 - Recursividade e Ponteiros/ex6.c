#include <stdio.h>
/*Autor Nathan Lisboa
Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, calculado segundo a fórmula abaixo.  
 
Data:26/09/2022*/
// Criar a função
float Fatorial(int N) {
  int fat;       // Declarar a variável do fatorial
  float S = 1.0; // Declarar a variável da soma S

  for (int i = 1; i <= N; i++) { // Criar a repetição para quantos fatoriais
    fat = 1;
    for (int d = 1; d <= i; d++) { // Calcular o valor do fatorial
      fat = fat * d;
    }
    S += (1.0 / fat); // Fazer a operação da soma
  }

  return S; // Retornar o valor da soma
}

int main(void) {
  // Declarar as variáveis
  int N;

  // Ler a variável N
  printf("Digite um valor inteiro e positivo para N: ");
  scanf("%d", &N);

  printf("\nO valor da soma S é: %.2f\n", Fatorial(N));
  return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
/*Autor Nathan Lisboa
Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. 
A  função  deve  retornar  um  valor  lógico  (true  ou  false).  Faça  um  programa  que  lê  N 
números e para cada um deles exibe uma mensagem informando se ele é positivo ou não, 
dependendo se foi retornado verdadeiro ou falso pela função.
Data:26/09/2022*/
bool verifica(int valor){
  if(valor<0){
    return false;
  }
  else if(valor>0){
    return true;
  }
}

int main(void) 
{
//Declarar variaveis: N / num;
  int N, num;

  printf("\nEscreva quantos números quer avaliar (positivo ou falso): ");
  scanf("%d", &N);

  for(int i=1; i<=N; i++){
    printf("\nEscreva um número: ");
    scanf("%d", &num);

    if (verifica(num)==true){
      printf("O número é positivo.\n");
    }
    else if(verifica(num)==false){
      printf("O número é negativo.\n");
    }
  }

  return 0;

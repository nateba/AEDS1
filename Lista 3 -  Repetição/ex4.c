#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo=Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor 
de E: 
 
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + .... + 1 / N!  Data 19/09/2022*/
int main(void) 
{
  //declaração de variaveis
  
  double fat, E = 0;
  int denominador, N, anterior;
  
  //IDENTIFICAR LIMITE DOS NÚMEROS

  printf("Digite o valor de N: ");
  scanf("%d", &N);
  
  //CALCULOS
  
  for (denominador = 0; denominador <= N; denominador++)
    {
      fat = 1;

      for (anterior = denominador; anterior > 0; anterior--)
        {
          fat = fat * anterior;
        }

      E = E + 1/fat;

      
    }

  //RESULTADO

  printf("\n\n** A resposta da equação é:\n\t\t\t %lf", E);
  
  
  

return 0;
}
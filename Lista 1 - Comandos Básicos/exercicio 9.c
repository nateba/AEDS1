#include <stdio.h>
/* Autor - Nathan
    Objetivo - Ler o numerador e o denominador de uma fração e transformá-la em um número decimal. 
    Data - 04/09/2022 */

int main(void) {

  //Declarar variáveis

  float numerador, denominador, decimal;

  //Ler o numerador e o denominador

  printf("Escreva o numerador e o denominador de uma fração:");
  scanf("%f %f",&numerador,&denominador);

  //Declarar variáveis

  decimal=(numerador/denominador);

  //Resultado do programa

  printf("A fração em números decimais é %.2f",decimal);
 
  return 0;
}
#include <stdio.h>
/* Autor - Nathan
    Objetivo - Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque dos valores das duas variáveis de forma que a variável A passe a ter o valor da variável B e vice-versa. No final, mostre os valores finais.  
    Data - 04/09/2022 */

int main(void) {
  
  //Declaração de variáveis
  
  float A, B, auxiliar;
  
  //Ler as variáveis

  printf("Escreva dois números reais:");
  scanf("%f %f",&A,&B);

  // Declarar variáveis
  auxiliar=A;
  A=B;
  B=auxiliar;

  //Resultado do programa

  printf("Os valores de A e B invertidos sao:%.2f %.2f",A,B);
  
    
  
  return 0;
}
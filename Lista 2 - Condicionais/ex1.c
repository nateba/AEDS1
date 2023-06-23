#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Dado dois números imprimir somente o maior deles. 
Data: 12/092022*/

int main(void) {
  //Declaração de variáveis
  float num1,num2;
  //Ler dois numeros
  printf("Escreva dois numeros:");
  scanf("%f %f",&num1,&num2);
  //Analisar qual é maior e imprimir ele
  if (num1>num2)
  {
    printf("%.2f",num1);
  }
  else if (num2>num1)
  {
    printf("%.2f",num2);
  }
  else if (num1=num2);
  {
    printf("Os dois números são iguais");
  }
  
  return 0;
}
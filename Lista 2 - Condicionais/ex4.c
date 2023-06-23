#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Faça  um  algoritmo  que  leia a nota da pessoa e diga em qual categoria ela fica.
Data: 12/09/2022*/

int main(void) {
  //Declaração de variáveis
  float nota;
  //Ler a nota
  printf("Qual foi a sua nota?");
  scanf("%f",&nota);
  //Checar qual foi o seu resultado de acordo com a nota
  if (nota >= 8 && nota <= 10)
  {
    printf("Sua avaliação é ótima");
  }
  else if (nota >= 7 && nota <8)
  {
    printf("Sua avaliação é boa");
  }
  else if (nota >= 5 && nota<7)
    {
    printf("Sua nota é regular");
    }
  else if (nota < 5 )
  {
    printf("Sua nota é insatisfatória");
  }
  else 
  {
    printf("Coloque uma nota válida por favor");
  }
  return 0;
}
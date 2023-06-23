#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo-Faça um algoritmo que leia 2 números inteiros e faça sua adição. Se o resultado for maior 
ou  igual  a  10,  some  5  a  este  número.  Caso  contrário  some  7  a  ele.  Imprima  o  resultado 
final. 
Data: 12/092022*/

int main(void) {
  //Declaração de variáveis
  float num1,num2,soma;
  //Ler dois numeros
  printf("Escreva dois numeros:");
  scanf("%f %f",&num1,&num2);
  //Fazer a adição dles
  soma=num1+num2;
  //Olhar as condições para somar valores
  if(soma>=10)
  {
    printf("Já que o resultado da soma é maior que 10 o final é %.2f",soma+5);
  }
  else if (soma<10)
  {
    printf("Já que o resultado da soma é menor que 10 o final é %.2f",soma+7);
  }
  
  return 0;
}
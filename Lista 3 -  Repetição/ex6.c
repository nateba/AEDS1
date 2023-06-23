#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo= Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:  
 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n 
 
O algoritmo deve escrever cada termo gerado e o valor final de S. 
  Data
19/09/2022*/
int main(void) {
  //Declaração de variaveis
  float N,den=1,S=0;
  //Leitura de um valor
  printf("Escreva um valor");
  scanf("%f",&N);
  //Calculo
  for(den=1;den<=N;N--){
    S=S+1/N;
  }
  //Resultado
  printf("O resultado da expressao é %.2f",S);
  return 0;
}
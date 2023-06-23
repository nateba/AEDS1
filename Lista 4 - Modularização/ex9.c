#include <stdio.h>
/* Nathan Lisboa / 17/10
Escreva um programa em C que declare variáveis para armazenar um valor inteiro, um valor 
real  e  um  caracter.  Deve  existir  no  programa  ponteiros  associados  a  cada  um  deles.  O 
programa deve solicitar novos dados para as variáveis e elas devem ser modificadas usando 
os respectivos ponteiros. Exiba os endereços e os conteúdos de todas as variáveis e ponteiros 
antes e após a alteração.  */

int main(void) {
  //Declaração de variáveis
  int in=3; //inteiro
  float re=7.8; // real
  char ca='a'; // caracter
  //Declaração dos ponteiros
  int *inPtr=&in;
  float *rePtr=&re;
  char *caPtr=&ca;
  //Printar as informações
  printf("Valor de in: %d\n", in);
  printf("Endereço de in: %p\n", &in);
  printf("Valor de inPtr: %d\n", *inPtr);
  printf("Endereço de inPtr: %p\n\n", &inPtr);

  printf("Valor de re: %f\n", re);
  printf("Endereço de re: %p\n", &re);
  printf("Valor de rePtr: %f\n", *rePtr);
  printf("Endereço de rePtr: %p\n\n", &rePtr);

  printf("Valor de ca: %c\n", ca);
  printf("Endereço de ca: %p\n", &ca);
  printf("Valor de caPtr: %c\n", *caPtr);
  printf("Endereço de caPtr: %p\n\n", &caPtr);
//Novos valores para as variáveis
  printf("Digite um novo valor inteiro:\n");
  scanf("%d", inPtr);
  printf("Digite um novo valor real:\n");
  scanf("%f", rePtr);
  printf("Digite um novo caracter:\n");
  scanf(" %c", caPtr);
//Printar as novas informações
  printf("\nValor de in: %d\n", in);
  printf("Endereço de in: %p\n", &in);
  printf("Valor de inPtr: %d\n", *inPtr);
  printf("Endereço de inPtr: %p\n\n", &inPtr);
  
  printf("Valor de re: %f\n", re);
  printf("Endereço de re: %p\n", &re);
  printf("Valor de rePtr: %f\n", *rePtr);
  printf("Endereço de rePtr: %p\n\n", &rePtr);

  printf("Valor de ca: %c\n", ca);
  printf("Endereço de ca: %p\n", &ca);
  printf("Valor de caPtr: %c\n", *caPtr);
  printf("Endereço de caPtr: %p\n\n", &caPtr);

  return 0;
}
#include <stdio.h>
/* Nathan Lisboa / 17/10 
Faça uma função em C para contar os dígitos de um determinado número usando recursão. 
Faça um programa principal que leia um número, acione a função e exiba o resultado gerado.*/

//Função que conta os dígitos
int contador(int num){
  if(num<0){
    num=num*-1;
  }
  if((num/10)<1){
    return(1);
  }
  else{
    return (1+contador(num/10));
  }
}
int main(void) {
  //Declaração de variaveis
  int num;
  //Digite um número
  printf("Digite um número inteiro aleatório:\n");
  //Leitura do número
  scanf("%d",&num);
  //Exibição do resultado
  while (num >= 0){
  printf("O número digitado tem %d dígito(s)\n",contador(num));
    //Digite um número
  printf("Digite um número inteiro aleatório\n");
  //Leitura do número
  scanf("%d",&num);
   }
  return 0;
}
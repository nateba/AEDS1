#include <stdio.h>
/* Nathan Lisboa / 17/10 
Faça uma função para encontrar a soma dos dígitos de um número usando recursão. Faça um 
programa principal que leia um número, acione a função e exiba o resultado gerado. */
//Função calculadora de soma dos dígitos
int somadig(num){
  if (num>=0&&num<=9) {
    return num;
    }
  else {
    return((num%10)+somadig(num/10));
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
  printf("A soma dos dígitos do numero é %d\n",somadig(num));
    //Digite um número
  printf("Digite um número inteiro aleatório\n");
  //Leitura do número
  scanf("%d",&num);
   }
  return 0;
}
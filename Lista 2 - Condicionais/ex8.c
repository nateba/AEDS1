#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Construa  um  programa  que  lê  uma  opção  conforme  abaixo  (usar
estrutura  SWITCH)  e  o salário atual do funcionário, calcula e exibe o novo
salário:

  A = aumento de 8% no salário;
  B = aumento de 11% no salário;
  C = aumento fixo no salário
(de R$ 350,00 se o salário atual for até R$ 1000 e de R$    200,00 se o salário
atual for maior que R$ 1000).
 .
Data: 12/09/2022*/

int main(void) {

  // Declaração de variáveis
  float salario, novosal;
  char opcao;
  // Leitura do salário atual
  printf("Qual o seu salário?");
  scanf("%f", &salario);
  //Leitura da condição

  printf("Qual a sua condição?");
  scanf(" %c", &opcao);
//Resultados das condições dependendo de qual for escolhida
  switch (opcao) {
  case 'A':
    novosal = (salario*1.08);
    printf("O novo salário com 8 porcento de aumento vale %.2f", novosal);
    break;

  case 'B':
    novosal = (salario*1.11);
    printf("O novo salário com 11 porcento de aumento vale %.2f", novosal);
    break;

  case 'C':
    if (salario <= 1000) {
      novosal = salario + 350;
      printf("O novo salário vale %.2f", novosal);
    } else if (salario > 1000) {
      novosal= salario + 200;
      printf("O novo salário vale %.2f", novosal);
    }
    break;
  }

  return 0;
}
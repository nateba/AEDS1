#include <stdio.h>
/* Autor - Nathan
    Objetivo - Ler o valor do salário mínimo e a quantidade de kw gasta, calcular e mostrar o valor de cada kw, o valor a ser pago e o novo valor com 10% de desconto
    Data - 04/09/2022 */

int main(void) {
  //Declaração de variáveis
  
float salario, qntkw, vlrkw, vlrfinal, desc;
  
  //Ler os valores
  
  printf("Qual o valor do salário mínimo? E a quantidade de kw gasta pela sua residência?\n");
  scanf("%f %f",&salario,&qntkw);
  
  //Declaração de variáveis
  
  vlrkw= ((salario/7)/100);
  vlrfinal= (vlrkw)*(qntkw);
  desc= (vlrfinal)-(vlrfinal*0.10);
  
  //Mostrar o resultado do programa
  
printf("O valor de cada kw é: %.2f \nA sua residência vai pagar %.2f reais\nSe houver um desconto de 10 porcento o novo valor será %.2f reais",vlrkw,vlrfinal,desc);
  return 0;
}
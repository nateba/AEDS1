#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo=Fazer um programa leia uma seqüência de valores inteiros fornecida pelo
usuário em uma linha de entrada e conte o número de valores positivos, negativos
e zeros. Data 19/09/2022*/

int main(void) {
  // Declaração de Variáveis
  int num1, sequencia, positivos = 0, negativos = 0, zeros = 0, i;

  // Leitura de dados
  printf("Informe quantos numeros na sequencia:\t");
  scanf("%d", &sequencia);
  //Re
  for (i = 1; i <= sequencia; i++) {
    printf("Digite o valor do numero da sequencia:\t");
    scanf("%d", &num1);
    //Contagem de valores positivos negativos e zeros
    if (num1 > 0) {
      positivos = positivos + 1;

    } else if (num1 < 0) {
      negativos = negativos + 1;
    } else {
      zeros = zeros + 1;
    }
  }
  //
  printf("\nOs valores positivos sao:\t%d", positivos);
  printf("\nOs valores negativos sao:\t%d", negativos);
  printf("\nOs valores zeros sao:\t%d", zeros);
  return 0;
}
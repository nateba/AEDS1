#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo=Adaptar  o  programa  acima  para  que  ele  calcule  o  percentual dos
valores  positivos,
negativos e zeros em relação ao total de valores fornecidos.  Data 19/09/2022*/

int main(void) {
  // Declaração de Variáveis
  int num1, sequencia, positivos = 0, negativos = 0, zeros = 0, porcentagepositivos = 0, porcentagenegativos = 0,
porcentagezeros = 0, i;

  // Leitura de dados
  printf("Informe quantos numeros na sequencia:\t");
  scanf("%d", &sequencia);
  // Re
  for (i = 1; i <= sequencia; i++) {
    printf("Digite o valor do numero da sequencia:\t");
    scanf("%d", &num1);
    // Contagem de valores positivos negativos e zeros
    if (num1 > 0) {
      positivos++;

    } else if (num1 < 0) {
      negativos = negativos + 1;
    } else {
      zeros = zeros + 1;
    }
  }
  //
  printf("\nOs valores positivos sao:\t%d", positivos);
  printf("\nOs valores negativos sao:\t%d", negativos);
  printf("\nOs valores zeros sao:\t%d\n\n", zeros);

  porcentagepositivos = ((float)positivos / sequencia) * (100);

  printf("\nA porcentagem de valores positivos é %.2f porcento:\t",
         (float)porcentagepositivos);

  porcentagenegativos = ((float)negativos / sequencia) * (100);

  printf("\nA porcentagem de valores negativos é %.2f porcento:\t",
         (float)porcentagenegativos);

  porcentagezeros = ((float)zeros / sequencia) * (100);

  printf("\nA porcentagem de zeros é %.2f porcento:\t", (float)porcentagezeros);

  return 0;
}
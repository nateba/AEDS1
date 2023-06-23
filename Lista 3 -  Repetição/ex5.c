#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo= prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e número de filhos de cada habitante. A
prefeitura deseja saber:

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.

O final da leitura de dados se dará com a entrada de um salário negativo.  Data
19/09/2022*/
int main(void) {
  // Declaração de variáveis
  float sal = 0, filhos = 0, media_sal = 0, media_filho = 0, maior_sal = 0,
        percentualsalov100 = 0, qntsal = 0, qntfilhos = 0, soma_sal,
        soma_filhos = 0, maiorsal = 0, contsal = 0;

  // Coleta de dados
  do {
    printf("Qual o seu salário? Quando quiser que pare digite um salário "
           "negativo\n");
    scanf("%f", &sal);
    //Contagem de salarios
    if (sal > 0) {

      qntsal++;
      soma_sal += sal;
    }
    printf("Quantos filhos voce tem?");
    scanf("%f", &filhos);
    //Contagem de filhos
    if (filhos > 0) {
      qntfilhos++;
      soma_filhos += filhos;
    }
    //Checar o maior salario
    if (sal > maior_sal) {
      maiorsal=sal;
    }
    //Contagem de pessoas com salario menor ou igual a 100
    if (sal <= 100 && sal > 0) {
      contsal++;
      printf("O numero de pessoas com salário até 100 ate agora é %.2f\n",contsal);
    }
  }
//Para se o salario for negativo
  while (sal >= 0);
  printf("Salário Inválido o programa acabou\n\n");
  media_sal = (soma_sal / qntsal);
  printf("A média dos salários é %.2f\n", media_sal);
  media_filho = (soma_filhos / qntfilhos);
  printf("A média do numero de filhos é %.2f\n", media_filho);
  printf("O maior salario é %.2f\n", maiorsal);
  percentualsalov100 = (contsal / qntsal) * (100);
  printf("A porcentagem de pessoas com salário até 100 é de %.2f",
         percentualsalov100);

  return 0;
}
/*printf("Quantos filhos voce tem?");
  scanf("%f",&filhos);*/
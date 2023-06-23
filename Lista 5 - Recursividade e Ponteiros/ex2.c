#include <stdio.h>
/*Autor Nathan Lisboa
A  prefeitura  de  uma  cidade  fez  uma  pesquisa  entre  os  seus  habitantes,  coletando  dados 
sobre  o  salário  e  número  de  filhos.  Faça  um  procedimento  que  leia  esses  dados  para  um 
número  não  determinado  de  pessoas,  calcule  e  exiba  a  média  de  salário  da  população  (a 
condição de parada pode ser um flag ou a quantidade N). Faça um programa que acione o 
procedimento. 
Data:26/09/2022*/
// Criar um procedimento do tipo void
void Media(float tt_salario, int tt_pop) {
  float media_sal; // Declarar a variável de média de salário

  media_sal = tt_salario / tt_pop; // Calcula a média de salário

  printf("\nA média de salário é R$%.2f/hab. em um total de %d habitantes.\n",
         media_sal, tt_pop); // Exibir o valor da média
}

int main(void) {
  // Criar as variáveis
  int N, filho, tt_pop = 0; // Zerar o total da população
  float sal, tt_sal = 0;    // Zerar o total do salário

  // Ler as variáveis
  printf("Digite o número de habitantes que serão analisados: ");
  scanf("%d", &N);

  // Criar a repetição para rodar o número N de habitantes
  for (int i = 1; i <= N; i++) {
    printf("\nHABITANTE %d\n", i);
    printf("Número de filhos: ");
    scanf("%d", &filho);
    printf("Salário: R$");
    scanf("%f", &sal);

    tt_pop +=
        (filho + 1); // Calcular o total da população considerando-se os filhos
    tt_sal += sal;
  }

  // Chamar o procedimento ao final da repetição
  Media(tt_sal, tt_pop);

  return 0;
}
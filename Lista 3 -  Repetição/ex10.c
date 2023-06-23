#include <stdio.h>
/*
  Autor - Nathan Lisboa 
  Objetivo - Em uma eleição presidencial existem quatro candidatos. Os votos são informados através 
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte 
codificação:  
 
1,2,3,4 = voto para os respectivos candidatos; 
5 = voto nulo;  
6 = voto em branco; 
 
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva: 
 
- total de votos para cada candidato;  
- total de votos nulos;  
- total de votos em branco. 
       
Como finalizador do conjunto de votos, tem-se o valor 0. 
 
  Data - 15/09/2022
*/
void Menu() {
  printf("\nURNA ELETRÔNICA\n");
  printf("1 - Candidato 1\n");
  printf("2 - Candidato 2\n");
  printf("3 - Candidato 3\n");
  printf("4 - Candidato 4\n");
  printf("5 - Voto nulo\n");
  printf("6 - Voto em branco\n");
  printf("0 - Sair\n");
  printf("Qual o seu voto? ");
}

int main(void) {
  // Declarar as variáveis
  int op, tt_1, tt_2, tt_3, tt_4, tt_5, tt_6;

  // Zerar os contadores
  tt_1 = 0;
  tt_2 = 0;
  tt_3 = 0;
  tt_4 = 0;
  tt_5 = 0;
  tt_6 = 0;

  // Chamar o módulo Menu()
  Menu();
  scanf("%d", &op);

  // Criar laço de repetição enquanto o voto não for zero
  while (op != 0) {
    if (op == 1)
      tt_1++;
    else if (op == 2)
      tt_2++;
    else if (op == 3)
      tt_3++;
    else if (op == 4)
      tt_4++;
    else if (op == 5)
      tt_5++;
    else if (op == 6)
      tt_6++;
    else
      printf("Opção inválida!\n");
    Menu(); // Reexibir o Menu para manter a repetição
    scanf("%d", &op);
  }

  // Exibir os resultados
  printf("\nTOTAL DE VOTOS - CANDIDATO 1: %d\n", tt_1);
  printf("TOTAL DE VOTOS - CANDIDATO 2: %d\n", tt_2);
  printf("TOTAL DE VOTOS - CANDIDATO 3: %d\n", tt_3);
  printf("TOTAL DE VOTOS - CANDIDATO 4: %d\n", tt_4);
  printf("TOTAL DE VOTOS NULOS: %d\n", tt_5);
  printf("TOTAL DE VOTOS EM BRANCO: %d\n", tt_6);

  return 0;
}
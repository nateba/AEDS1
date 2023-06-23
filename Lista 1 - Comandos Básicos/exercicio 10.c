#include <stdio.h>
/* Autor - Nathan
    Objetivo - Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia
    Data - 04/09/2022 */

int main(void) {
  
  //Declaração de variáveis
  
float hora,h,minutos,conversao;

  printf("Digite qualquer horário do dia no formato 24h:");
  scanf("%f",&hora);

  //Declaração de variáveis

  h=(int)hora;
  minutos=(hora-h);
  conversao= (h*60)+(minutos*100);
//Resultado do programa

  printf("O tempo passado em minutos desde o começo do dia em minutos é:%.2f",conversao);
  
 
  return 0;
}
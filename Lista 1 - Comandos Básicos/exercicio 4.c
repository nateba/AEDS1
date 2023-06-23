#include <stdio.h>
#include <math.h>
/* Autor - Nathan
    Objetivo - Ler com o raio de um círculo e mostrar o seu perímetro e área. 
    Data - 04/09/2022 */

int main(void) {
  //Declaração de variáveis
  
  float raio, area, perimetro, pi=3.14;
  
  //Ler o raio do círculo
  printf("Qual o raio do círculo que deseja calcular a área e o perímetro?");
  scanf("%f",&raio);

//Declaração de variáveis

  area= pi*pow(raio,2);
  perimetro= 2*pi*raio;

  //Resultado do programa

  printf("A área do círculo com o raio que voce escolheu é: %2.f\nE o perimetro é %.2f",area, perimetro);
  

  return 0;
}
#include <stdio.h>
#include <math.h>
/* Autor - Nathan
    Objetivo - Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal. 
    Data - 04/09/2022 */
int main(void) {
  
  //Declaração de variáveis
  
  float base, altura, perimetro, area, diagonal;
  
  //Ler a base e a altura
  
  printf("Qual a base e a altura do retângulo?");
  scanf("%f %f",&base,&altura);
  
  //Declaração de variáveis
  
  perimetro=(base*2)+(altura*2);
  area= (base)*(altura);
  diagonal= sqrt((pow(base,2)+pow(altura,2)));

  //Resultado do programa
  
  printf("O perírmetro do retângulo é: %.2f\nA área é: %.2f\nA diagonal é %.2f:\n",perimetro,area,diagonal);
  
  return 0;
}
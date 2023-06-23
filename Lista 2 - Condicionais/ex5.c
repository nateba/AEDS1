#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Um  hotel  com  75  apartamentos  deseja  fazer  uma  promoção  especial  de  final  de  semana, 
concedendo  um  desconto  de  25%  na  diária.  Com  isto,  espera  aumentar  sua  taxa  de 
ocupação  de  50  para  80%.  Sendo  dado  o  valor  normal  da  diária,  calcular  e  imprimir:  
 
a) o valor da diária promocional;  
b) o valor total arrecadado com 80% de ocupação e diária promocional;  
c) o valor total arrecadado com 50% de ocupação e diária normal;  
d) a diferença entre estes dois valores. 
Data: 12/09/2022*/

int main(void) {
  //Declaração de variáveis
  
  float diaria, desc, diariadesc,valor,ocupacao1,ocupacao2,diferenca;
  
  //Leitura do valor da diária

  printf("Qual o valor da diária?");
  scanf("%f",&diaria);

  //Diária com desconto
  
  desc= diaria*0.25;
  diariadesc=diaria-desc;

  printf("O valor da diária é:%.2f\n",diariadesc);

  //Ocupação 1

  ocupacao1=diariadesc*75/100*80;
  

    printf("O valor da diária com 80 porcento de ocupação e a diária com desconto é: %.2f\n",ocupacao1);

  //Ocupação 2

  ocupacao2=diaria*75/100*50;

  printf("O valor da diária com 50 porcento de ocupação e a diária normal é: %.2f\n",ocupacao2);

  // A diferença entre os dois valores
  
  diferenca=ocupacao1-ocupacao2;

  printf("A diferença entre os dois valores das duas situações é de %.2f\n",diferenca);

  

  
  return 0;
}
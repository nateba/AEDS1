#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Leia a velocidade máxima permitida em uma avenida e a  velocidade com que o motorista 
estava  dirigindo  nela.  Se  o  motorista  estiver  dentro  do  limite  de  velocidade,  imprima  a 
mensagem  “Motorista  respeitou  a  lei”.  Se  o  motorista  tiver  ultrapassado  a  velocidade 
máxima  permitida,  calcule  e  imprima  o  valor  da  multa  a  ser  cobrada,  sabendo  que  os 
valores a serem cobrados são os seguintes: 
• 50 reais se o motorista ultrapassar  em até 10km/h a velocidade permitida (ex: se a 
velocidade máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h); 
• 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida; 
• 200 reais, se estiver acima de 30km/h da velocidade permitida.
 .
Data: 12/09/2022*/
int main(void) {
  //Declaração de variáveis
  float velmax, velmot,velextra,multa;
  //Leia a velocidade maxima e a velocidade do motorista
  printf("Qual a velocidade máxima permitida na avenida?");
  scanf("%f",&velmax);
  printf("Qual a velocidade em que voce estava dirigindo?");
  scanf("%f",&velmot);
  //Checar as condições para saber a situação e o valor que o motorista vai pagar de multa ou nao
  if (velmot<=velmax)
  {
    printf("O motorista respeitou a lei");
  }
  else if (velmot>velmax)
  {
    velextra=velmot-velmax;
  }
  if (velextra<=10)
  {
    multa=50;
    printf("O valor da multa é %.2f porque voce estava acima da velocidade permitida em até 10km/h",multa);
  }
  else if (velextra>=11&&velextra<=30)
  {
    multa=100;
    printf("O valor da multa é %.2f porque voce estava acima da velocidade permitida entre 11km/h e 29km/h",multa);
  }
  else if (velextra>30)
  {
    multa=200;
    printf("O valor da multa é %.2f porque voce estava acima da velocidade permitida mais que 30km/h",multa);
  }
  
  return 0;
}
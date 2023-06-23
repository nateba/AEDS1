#include <stdio.h>
/*Nathan de Araújo Cunha Lisboa
Data  por  extenso.  Faça  um  programa  que  solicite  a  data  de  nascimento  (dd/mm/aaaa)  do 
usuário e imprima a data com o nome do mês por extenso. 
Data de Nascimento: 03/03/1980 
Você nasceu em 03 de Março de 1980.  
Data: 7/12/2022 */
char *Checames(char a, char b) {

  if (a == '1') {
    if (b == '0') {
      return "Outubro";
    } else if (b == '1') {
      return "Novembro";
    } else if (b == '2') {
      return "Dezembro";
    }
  } else {
    if (b == '1') {
      return "Janeiro";
    } else if (b == '2') {
      return "Fevereiro";
    } else if (b == '3') {
      return "Março";
    } else if (b == '4') {
      return "Abril";
    } else if (b == '5') {
      return "Maio";
    } else if (b == '6') {
      return "Junho";
    } else if (b == '7') {
      return "Julho";
    } else if (b == '8') {
      return "Agosto";
    } else if (b == '9') {
      return "Setembro";
    }
  }
  return 0;
}
int main(void) {
  char data[10];
  char mes;

  printf("Escreva uma data no formato dd/mm/aaaa\n");
  scanf("%s", data);

  Checames(data[3], data[4]);
  printf("Voce nasceu em %c%c de %s de %c%c%c%c.", data[0], data[1],
         Checames(data[3], data[4]), data[6], data[7], data[8], data[9]);
  return 0;
}

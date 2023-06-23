#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*Nathan de Araújo Cunha Lisboa
O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo 
de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto 
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ 
seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa 
que  faça  uso  desse  Código  de  César  (3  posições),  entre  com  uma  string  e  retorne  a  string 
codificada. 
Exemplo: a ligeira raposa marrom saltou sobre o cachorro cansado 
Nova  string:  D  OLJHLUD  UDSRVD  PDUURP  VDOWRX  VREUH  R  FDFKRUUR  
                            FDQVDGR 
Data: 7/12/2022 */

int main(void) {
  char frase[100];

  printf("Digite uma frase: ");
  scanf("%[^\n]", frase);

  for (int i = 0; i < strlen(frase); i++) {
    if (frase[i] != ' ')
      printf("%c", toupper(frase[i] + 3));
    else if (frase[i] == ' ')
      printf(" ");
  }

  printf("\n");

  return 0;
}
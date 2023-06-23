#include <stdio.h>
#include <string.h>
/*Nathan de Araújo Cunha Lisboa
Palíndromo. Um palíndromo é uma sequência de caracteres cuja leitura é idêntica se feita da 
direita para esquerda ou vice−versa. Por exemplo: OSSO e OVO são palíndromos. Em textos 
mais  complexos  os  espaços  e  pontuação  são  ignorados.  A  frase  SUBI  NO  ONIBUS  é  o 
exemplo de uma frase palíndroma onde os espaços foram ignorados. Faça um programa que 
leia uma sequência de caracteres, mostre−a e diga se é um palíndromo ou não. 
Data: 7/12/2022 */
int main(void){
char frase[50],checa[50];
  int a=0;
  printf("Digite uma frase\n");
  scanf("%[^\n]",frase);
  for(int i=0;i<(strlen(frase));i++){
    if(frase[i]!=' '){
      checa[a]=frase[i];
      a++;
    }
  }
  checa[a]='\0';
  
for(int i=0;i<(strlen(checa)/2);i++){
  if(checa[i]!=checa[strlen(checa)-1-i]){
    printf("Não é um palindromo");
  return 0;
  }
}
 printf("A palavra é um palíndromo"); 
  return 0;
}




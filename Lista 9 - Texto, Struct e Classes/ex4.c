#include <stdio.h>
#include <string.h>
/*Nathan de Araújo Cunha Lisboa
Faça  um  programa  que,  a  partir  de  um  texto  digitado  pelo  usuário,  imprima  o  texto 
removendo  todos  os  espaços  em  branco  adicionais  encontrados,  de  modo  que  haja,  no 
máximo, um espaço em branco separando as palavras presentes nesse texto. 
Data: 7/12/2022 */
int main(void) {
  char nome[100], frase[100];
  int a = 0;
  printf("Digite uma frase\n");
  scanf("%[^\n]", nome);

  for (int i = 0; i < strlen(nome); i++) {
    if (!(nome[i] == ' ')) {
      frase[a]=nome[i];
      a++;
    }
    else if(nome[i]==' '){
      frase[a]=nome[i];
      a++;
      for(int j=i+1;j<strlen(nome);j++){
        if(nome[j]!=' '){
          i=j-1;
          j=strlen(nome);
        }
      }
    }
  }
  frase[a]='\0';
  printf("%s",frase);
  return 0;
}
#include <stdio.h>
#include <string.h>
/*Nathan de Araújo Cunha Lisboa
Escreva um programa que, a partir de um nome informado pelo usuário, exiba suas iniciais. 
As iniciais são formadas pela primeira letra de cada nome, sendo que todas deverão aparecer 
em maiúsculas na saída do programa. Note que os conectores e, do, da, dos, das, de, di, du 
não são  considerados nomes e, portanto, não devem ser  considerados para a obtenção das 
iniciais. As iniciais devem ser impressas em maiúsculas, ainda que o nome seja entrado todo 
em minúsculas. Exemplos: 
José Carlos Souza => JCS 
Nome do Fulano => NF 
Heloísa Martins Vieira => HMV 
Data: 7/12/2022 */
int main(void) {
  char nome[100];
  printf("Digite o seu nome\n");
  scanf("%[^\n]", nome);
  if (nome[0] >= 65 && nome[0] <= 90) {
    printf("%c", nome[0]);
  } else {
    nome[0] -= 32;
    printf(" %c", nome[0]);
  }
  for (int i = 1; i < strlen(nome); i++) {

    if (nome[i] == ' ') {
      if(nome[i+3]==' '||nome[i+4]==' ')
    {
      printf("");
    }
      else if (nome[i + 1] >= 65 && nome[i + 1] <= 90) {
        printf(" %c", nome[i + 1]);
      } else {

        nome[i + 1] -= 32;
        printf(" %c", nome[i + 1]);
      }
    }
  }

  return 0;
}


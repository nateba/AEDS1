#include <stdio.h>
/*Autor Nathan Lisboa
Faça um procedimento que recebe 3 valores inteiros por parâmetro e os  exiba em ordem 
crescente.  Faça  um  programa  que  leia  N  conjuntos  de  3  valores  e  acione  o  procedimento 
para cada conjunto. (N deve ser lido do teclado) 
Data:26/09/2022*/
// Criar o procedimento tipo void
void Crescente(int n1, int n2, int n3) {
  // Caso o primeiro número seja o menor
  if (n1 <= n2 && n1 <= n3) {
    printf("\nOrdem crescente: %d, ", n1);
    // Testa o segundo e o terceiro
    if (n2 <= n3)
      printf("%d e %d\n", n2, n3);
    else
      printf("%d e %d\n", n3, n2);
  }
  // Caso o segundo seja o menor
  else if (n2 <= n1 && n2 <= n3) {
    printf("\nOrdem crescente: %d, ", n2);
    // Testa o primeiro e o terceiro
    if (n1 <= n3)
      printf("%d e %d\n", n1, n3);
    else
      printf("%d e %d\n", n3, n1);
  }
  // Caso o terceiro seja o menor
  else {
    printf("\nOrdem crescente: %d, ", n3);
    // Testa o primeiro e o segundo
    if (n1 <= n2)
      printf("%d e %d\n", n1, n2);
    else
      printf("%d e %d\n", n2, n1);
  }
}

int main(void) {
  // Declarar as variáveis
  int N, n1, n2, n3;

  // Ler as variáveis
  printf("Digite o número de vezes que o programa irá rodar: ");
  scanf("%d", &N);

  // Criar a repetição para N vezes
  for (int i = 1; i <= N; i++) {
    // Ler as variáveis dos números
    printf("\nDigite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    // Chamar o procedimento que exibe em ordem crescente
    Crescente(n1, n2, n3);
  }
  return 0;
}
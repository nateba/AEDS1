#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, soma = 0;

  scanf("%d", &N);

  int *vetor = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++) {
    scanf("%d", vetor + i);
    soma += *(vetor + i);
  }

  printf("%d\n", soma);

  free(vetor);

  return 0;
}
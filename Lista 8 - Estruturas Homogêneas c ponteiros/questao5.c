#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, menor, posMenor, aux;

  scanf("%d", &N);

  int *vetor = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++) {
    scanf("%d", vetor + i);
  }

  menor = vetor[0];

  for (int i = 0; i < N; i++) {
    for (int j = i; j < N; j++) {
      if (*(vetor + j) < menor) {
        menor = *(vetor + j);
        posMenor = j;
      }
    }
    aux = *(vetor + i);
    *(vetor + i) = *(vetor + posMenor);
    *(vetor + posMenor) = aux;
  }

  for (int i = 0; i < N; i++) {
    printf("%d\n", *(vetor + i));
  }

  free(vetor);

  return 0;
}
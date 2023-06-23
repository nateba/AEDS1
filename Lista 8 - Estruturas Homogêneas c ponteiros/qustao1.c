#include <stdio.h>

int main(void) {
  int N;

  scanf("%d", &N);

  int vetor[N], *pVet = vetor;

  for (int i = 0; i < N; i++) {
    scanf("%d", &vetor[i]);
    printf("%d\n", *(pVet + i));
  }

  return 0;
}
#include <stdio.h>

int main(void) {
  int N;

  scanf("%d", &N);

  int vetor[N];

  for (int i = N - 1; i >= 0; i--) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < N; i++) {
    printf("%d\n", vetor[i]);
  }

  return 0;
}
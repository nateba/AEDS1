#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N;

  scanf("%d", &N);

  int *pVet = (int *)malloc(N * sizeof(int));
  float maior;

  for (int i = 0; i < N; i++) {
    scanf("%d", pVet + i);

    if (i == 0)
      maior = *(pVet + i);
    else {
      if (*(pVet + i) > maior)
        maior = *(pVet + i);
    }
  }

  printf("%.2f\n", maior);

  free(pVet);

  return 0;
}
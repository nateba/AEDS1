#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N = 0;
  char *pString = (char *)malloc(10 * sizeof(char));

  for (int i = 0; i < 10; i++) {
    scanf("%c", pString + i);
  }

  for (int i = 10; i >= 0; i--) {
    printf("%c", *(pString + i));
  }

  free(pString);

  return 0;
}
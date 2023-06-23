#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int vogal = 0, consoante = 0, i = 0;
  char *pString = (char *)malloc(6 * sizeof(char));

  for (int i = 0; i < 6; i++) {
    scanf("%c", pString + i);

    if (*(pString + i) == 'a' || *(pString + i) == 'e' ||
        *(pString + i) == 'i' || *(pString + i) == 'o' || *(pString + i) == 'u')
      vogal++;
    else
      consoante++;
  }

  printf("%d\n%d\n", vogal, consoante);

  free(pString);

  return 0;
}
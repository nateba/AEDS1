#include <stdio.h>

int main(void) {
  char letra = 'A', *pLetra = &letra;

  for (int i = 0; i < 26; i++) {
    printf("%c ", letra + i);
  }

  return 0;
}
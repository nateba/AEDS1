#include <stdio.h>
#include <string.h>

void Troca(char *x, char *y) {
  char aux;
  aux = *x;
  *x = *y;
  *y = aux;
}

void Permuta(char *a, int l, int r) {
  int i;
  if (l == r)
    printf("%s ", a);
  else {
    for (i = l; i <= r; i++) {
      Troca((a + l), (a + i));
      Permuta(a, l + 1, r);
      Troca((a + l), (a + i));
    }
  }
}

int main(void) {
  char str[4];

  for (int i = 0; i < 4; i++) {
    scanf("%c", &str[i]);
  }

  int n = strlen(str);

  Permuta(str, 0, n - 1);

  return 0;
}
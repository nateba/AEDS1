#include <stdio.h>
/* Nathan Lisboa / 17/10
Identifique o erro no programa a seguir, de modo que seja exibido o valor 10 na tela. 
 
#include <stdio.h> 
int main() 
{ 
    int x, *p, **q; 
    p = &x; 
    q = &p; 
    x = 10; 
    printf("\n%d\n", &q); 
    return(0); } 
}  */
int main(void) {
  printf("O que deveria ser mudado é na hora de imprimir, nao colocar o endereço de Q e sim **q que significa o conteúdo contido no endereço em Q que esta apontando no caso é 10\n");
  return 0;
}
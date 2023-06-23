#include <stdio.h>
/* Nathan Lisboa / 17/10
Se o endereço de uma variável valor foi atribuído a um ponteiro valorPtr, quais alternativas 
são verdadeiras? Justifique sua resposta. 
 
a) valor = = &valorPtr nao
b) valor = = *valorPtr sim
c) valorPtr = = &valor sim
d) valorPtr = = *valor  nao */
int main(void) {
  printf("A letra a ta errada porque o conteúdo da variavel valor nao é igual ao endereço do ponteiro\n");
  printf("A letra B ta certa porque O conteúdo gravado na localização que o ponteiro aponta é o mesmo da variável valor\n");
  printf("A letra C ta certa porque O endereço do ponteiro é o mesmo do endereço da variável valor\n");
  printf("A letra D ta errada porque o endereço do ponteiro nao é o conteúdo que ta na variável valor\n");
  return 0;
}
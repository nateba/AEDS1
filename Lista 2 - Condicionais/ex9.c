#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Fazer um programa para: 
• ler um símbolo do teclado; 
• identificar  com  a  estrutura  SWITCH  e  mostrar  as  seguintes  mensagens,  segundo  o 
caso: 
 .
Data: 12/09/2022*/

int main(void) {
  //Declaração de variável
  char simbolo;
  //Ler um símbolo do teclado
  printf("Digite um símbolo:");
  scanf("%c",&simbolo);

  switch(simbolo)
    { case '>':
    printf("SINAL DE MAIOR");
    break;

    case'<':
       printf("SINAL DE MAIOR");
    break;

       case'=':
       printf("SINAL DE IGUAL");
    break;

  default:
    printf("OUTRO SIMBOLO");
      }
      
    
  
  
  return 0;
}
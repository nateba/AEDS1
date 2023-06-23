#include <stdio.h>
/* Autor Nathan Lisboa
Objetivo- Faça  um  algoritmo  que  leia  o  ano  de  nascimento  de  uma pessoa
e  calcule  sua  idade, considerando  o  ano  atual.  Para  verificar  se  já
fez  aniversário  no  ano  atual  pergunte  se  a pessoa  já  fez  aniversário,
sendo  que  ela  pode  entrar  com  a  informação  "S"(sim)  ou  "N" (não).  Com
isto  é  possível  se  ter  maior  precisão  sobre  a  idade.  Verifique  também
se  a pessoa já tem idade para conseguir Carteira de Habilitação (18 anos ou
mais) e imprima a
mensagem referente a esta checagem. Imprima a idade da pessoa 
Data: 12/092022*/

int main(void) {
  // Declaração de variáveis

  int nasc, anoatual, habilit, idade;
  char aniv;

  // Leitura dos dados

  printf("Em que ano estamos?");
  scanf("%d", &anoatual);
  printf("Quando voce nasceu?");
  scanf("%d", &nasc);

  // Calcular idade

  idade = anoatual - nasc;

  // Se já fez aniversario esse ano

  printf("Voce já fez aniversário esse ano? S para sim e N para não.");
  scanf(" %c", &aniv);
  switch (aniv) {
  case 'S':
    idade = idade;
    break;
  case 'N':
    idade++;
  }
  //Se tem idade para habilitação ou não
  if (idade >= 18) {
    printf("Sua idade é %d e voce pode tirar habilitação\n",idade);
  } else if (idade < 18) {

    printf("Sua idade é %d e voce nao tem idade para tirar habilitação",idade);
  }
  return 0;
}
#include <stdio.h>
/*
Autor: Nathan Lisboa
Escreva  um  procedimento  que  recebe  3  valores  reais  X,  Y  e  Z  e  que  verifique  se  esses 
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, exibe qual é o 
tipo  de  triângulo  formado.  Para  que  X,  Y  e  Z  formem  um  triângulo  é  necessário  que  a 
seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor 
do  que  a  soma  do  comprimento  dos  outros  dois  lados.  O  procedimento  deve  identificar  o 
tipo de triângulo formado observando as seguintes definições:  
 
- Triângulo Equilátero: os comprimentos dos 3 lados são iguais; 
- Triângulo Isósceles: os comprimentos de pelo menos 2 lados são iguais.  
- Triângulo Escaleno: os comprimentos dos 3 lados são diferentes. 
 
      Faça um programa que leia um número indeterminado de triângulos (valores dos 3 lados) e  
      para cada triângulo, acione o procedimento.
Data: 26/09/2022*/ 

void Triangulo(float x, float y, float z) {
  // Condição caso o triângulo exista
  if (x < y + z && y < x + z && z < x + y) {
    if (x == y && x == z)
      printf("\nOs valores formam um triângulo equilátero.\n");
    else if (x == y || x == z || y == z)
      printf("\nOs valores formam um triângulo isósceles.\n");
    else
      printf("\nOs valores formam um triângulo escaleno.\n");
  }
  // Caso o triângulo não exista
  else
    printf("\nOs valores fornecidos não formam um triângulo.\n");
}

int main(void) {
  // Declarar as variáveis
  int op;
  float x, y, z;

  // Rodar o programa
  do {
    printf("\nDigite três valores reais para um triângulo: ");
    scanf("%f %f %f", &x, &y, &z);

    // Chamar o procedimento
    Triangulo(x, y, z);

    // Criar condição de repetição
    printf("\nDeseja testar de novo?\n");
    printf("1 - Sim\n");
    printf("0 - Não\n");
    printf("Opção: ");
    scanf("%d", &op);
  } while (op == 1);

  return 0;
}
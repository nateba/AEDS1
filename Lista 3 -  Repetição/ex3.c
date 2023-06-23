#include <stdio.h>
/*Autor=Nathan Lisboa
Objetivo=Faça um programa que receba dez números e verifique se eles são
divisíveis por 3 e 9 (ao mesmo  tempo),  por  2  e  por  5.  Caso  algum  número
não  seja  divisível  por  nenhum  desses números mostre a mensagem “Número não
é divisível pelos valores”. Apresente também ao final a quantidade de números
divisíveis por 3 e 9, por 2 e por 5. Data 19/09/2022*/
int main(void) {
  // Declaração de variáveis
  float num, num2 = 0, num5 = 0, num39 = 0, i=1,naodiv=0;
  // Ler os numeros
  for (i = 1; i <= 10; i++) {
    printf("Escreva o %.0f número:", i);
    scanf("%f", &num);
    //Checar se eh divisivel por 2
    if ((int)num % 2 == 0) {
      num2++;
    }
    //Checar se eh divisivel por 5
    if ((int)num % 5 == 0) {
      num5++;
    }
    //Checar se eh divisivel por 3 e 9
    if ((int)num % 3 == 0 &&(int) num % 9 == 0) {
      num39++;
      //Se nao for divisivel por nada
    } if  ((int)num%3!=0 && (int)num%9 !=0 &&(int) num%5 !=0 && (int)num%2!=0){
      ++naodiv;
      printf("O número nao é divisivel pelos valores\n");
    }
  }
  printf("A quantidade de valores divisiveis por 2 é:%.0f\n", num2);
  printf("A quantidade de valores divisiveis por 5 é:%.0f\n", num5);
  printf("A quantidade de valores divisiveis por 3 e 9 é:%.0f\n", num39);
   printf("A quantidade de valores nao divisiveis por nenhum valor é:%.0f\n", naodiv);


  return 0;
}
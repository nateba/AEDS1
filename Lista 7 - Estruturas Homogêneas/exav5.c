#include <stdio.h>

/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Faça um procedimento que preencha uma matriz M 5 x 5. Faça uma função que receba 
uma matriz preenchida, calcule e retorne cada uma das somas a seguir (uma função para 
cada letra abaixo):  
 
a) da linha 4 de M  
b) da coluna 2 de M  
c) da diagonal principal  
d) da diagonal secundária  
e) de todos os elementos da matriz.   Data:14/11/2022*/


//a) da linha 4 de M  
int linha4(int M[5][5]){
  printf("\nValores Linha 4\n");
  
  int soma = 0;
  
  for(int coluna = 0; coluna<5; coluna++) {
     printf(" Valor[4][%d] - %d.",coluna,  M[4][coluna]);
      soma+=M[4][coluna];
   }
  printf(" SOMA = %d", soma);
  return soma; 
}

//b) da coluna 2 de M  
int coluna2(int M[5][5]){
  printf("\n\nValores Coluna 2\n");
  
  int soma = 0;
  
  for(int linha = 0; linha<5; linha++) {
     printf(" Valor[%d][2] - %d.",linha,  M[linha][2]);
    soma+=M[linha][2];

   }
  printf(" SOMA = %d", soma);
  return soma;
}

//c) da diagonal principal
int diagonalPrincipal(int M[5][5]){
    printf("\n\nDiagonal Principal\n");

    int soma = 0;
  
    for(int linha = 0; linha<5; linha++){
      for(int coluna = 0; coluna<5; coluna++){
          if(linha == coluna){
            printf(" Valor[%d][%d] - %d.",linha, coluna,  M[linha][coluna]);
            soma+=M[linha][coluna];
          }
      }
    }
  printf(" SOMA = %d", soma);
  
  return soma;
}

//d) da diagonal secundária  
int diagonalSecundaria(int M[5][5]){
    printf("\n\nDiagonal Secundária\n");

    int soma = 0;
  
    for(int linha = 0; linha<5; linha++){
      for(int coluna = 0; coluna<5; coluna++){
          if (linha == 5 -1 - coluna){
            printf(" Valor[%d][%d] - %d.",linha, coluna,  M[linha][coluna]);
            soma+=M[linha][coluna];
          }
      }
    }
 
  printf(" SOMA = %d", soma);
  
  return soma;
}

//e) de todos os elementos da matriz.
int elementosMatriz(int M[5][5]){
    printf("\n\n\n\n TODOS OS VALORES \n");

    int soma = 0;
  
    for(int linha = 0; linha<5; linha++){
      for(int coluna = 0; coluna<5; coluna++){
          printf("\nValor[%d][%d] - %d.",linha, coluna,  M[linha][coluna]);
          soma+=M[linha][coluna];
    }
  }
  printf("\nSOMA = %d", soma);
  
  return soma;
}


int main(void)
{
  int M[5][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

  linha4(M);
  coluna2(M);
  diagonalPrincipal(M);
  diagonalSecundaria(M);
  elementosMatriz(M);
  
  return 0;
}
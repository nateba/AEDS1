#include <stdio.h>
/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Faça um programa para preencher uma matriz 4 x 4, em seguida apresentar na tela a soma 
dos  elementos  abaixo  da  diagonal  principal.  Mostre  na  tela  os  elementos  da  diagonal 
principal também.   Data:14/11/2022*/
void preencheMatriz(int M[4][4]){
  for(int linha = 0; linha < 4; linha++){
    for(int coluna = 0; coluna<4; coluna++){
      printf("\nDigite o valor de M[%d][%d]: ", linha, coluna);
      scanf("%d", &M[linha][coluna]);

      if(linha == coluna){

        
      }
    }
  }
}


int main(void) 
{
  int matriz[4][4];

  preencheMatriz(matriz);
  

  return 0;
}
#include <stdio.h>
#include <stdlib.h>
/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Faça um procedimento que preencha 2 matrizes, A 4 x 6 e B 4 x 6. Faça uma função para 
cada uma das situações a seguir, que recebe duas matrizes preenchidas, calcula e retorna as 
matrizes indicadas :  
 
a) uma matriz S que seja a soma de A e B.  
b) uma matriz D que seja a diferença de A e B. (A - B).  
 
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar 
o seu uso. Escreva as matrizes resultantes do acionamento de cada uma das funções. 
    Data:14/11/2022*/
void PreencheMatrizes(int A[4][6], int B[4][6]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
      printf("B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }
}

int *Soma(int A[4][6], int B[4][6]) {
  int *ptrSoma = (int *)malloc((4 * 6) * sizeof(int));

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      *(ptrSoma + (i * 6) + j) = A[i][j] + B[i][j];
    }
  }

  return ptrSoma;
}


int *Diferenca(int A[4][6], int B[4][6]) {
  int *ptrDiferenca = (int *)malloc((4 * 6) * sizeof(int));

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      *(ptrDiferenca + (i * 6) + j) = A[i][j] - B[i][j];
    }
  }

  return ptrDiferenca;
}


void ExibeMatrizes(int *S, int *D) {
  printf("\nMATRIZ S:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      printf("S[%d][%d]: %d\n", i, j, *(S + (i * 6) + j));
    }
  }

  printf("\nMATRIZ D:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 6; j++) {
      printf("D[%d][%d]: %d\n", i, j, *(D + (i * 6) + j));
    }
  }
}

int main(void) {

  int A[4][6], B[4][6];
  int *S, *D;


  PreencheMatrizes(A, B);

  S = Soma(A, B);
  D = Diferenca(A, B);

  ExibeMatrizes(S, D);

  return 0;
}
#include <stdio.h>
/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Escrever um procedimento que preenche uma matriz M(10,10) e a escreve. Faça outros 
procedimentos que recebam uma matriz preenchida, realize as trocas indicadas a seguir 
(um procedimento para cada uma delas) e exiba a matriz resultante da troca:  
 
a) a linha 2 com a linha 8  
b) a coluna 4 com a coluna 10  
c) a diagonal principal com a diagonal secundária  
d) a linha 5 com a coluna 10.  
 
Faça um programa que faça as devidas declarações e acione os módulos para exemplificar 
o seu uso.  
    Data:14/11/2022*/

void PreencheMatrizM(int M[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("Termo [%d][%d]: ", i, j);
      scanf("%d", &M[i][j]);
    }
  }


  printf("\nMatriz M:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      printf("M[%d][%d]: %d\n", i, j, M[i][j]);
    }
  }
}


void MatrizA(int A[10][10], int M[10][10]) {

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      A[i][j] = M[i][j];
  }


  for (int j = 0; j < 10; j++) {
    A[1][j] = M[7][j];
    A[7][j] = M[1][j];
  }
}


void MatrizB(int B[10][10], int M[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      B[i][j] = M[i][j];
  }

  for (int i = 0; i < 10; i++) {
    B[i][3] = M[i][9];
    B[i][9] = M[i][3];
  }
}


void MatrizC(int C[10][10], int M[10][10]) {
 
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      C[i][j] = M[i][j];
  }

  for (int i = 0, j = 9; i < 10; i++, j--) {
    C[i][i] = M[i][j];
    C[i][j] = M[i][i];
  }
}

void MatrizD(int D[10][10], int M[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      D[i][j] = M[i][j];
  }

  for (int x = 0; x < 10; x++) {
    D[4][x] = M[x][9];
    D[x][9] = M[4][x];
  }
}

void ExibeTodasMatrizes(int A[10][10], int B[10][10], int C[10][10],
                        int D[10][10]) {
  printf("\nMatriz A:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("A[%d][%d]: %d\n", i, j, A[i][j]);
  }

  printf("\nMatriz B:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("B[%d][%d]: %d\n", i, j, B[i][j]);
  }

  printf("\nMatriz C:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("C[%d][%d]: %d\n", i, j, C[i][j]);
  }

  printf("\nMatriz D:\n");
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      printf("D[%d][%d]: %d\n", i, j, D[i][j]);
  }
}

int main(void) {
  int M[10][10], A[10][10], B[10][10], C[10][10], D[10][10];

  PreencheMatrizM(M);

  MatrizA(A, M);
  MatrizB(B, M);
  MatrizC(C, M);
  MatrizD(D, M);

  ExibeTodasMatrizes(A, B, C, D);

  return 0;
}
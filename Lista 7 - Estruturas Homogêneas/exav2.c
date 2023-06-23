#include <stdio.h>
/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Faça um procedimento que preencha um vetor X de 10 elementos. A seguir
faça uma função que receba um vetor preenchido, teste e copie todos os valores
negativos deste vetor para um novo vetor (sem deixar elementos vazios entre os
valores copiados), retornando este vetor como resultado. Faça um procedimento
que recebe e exibe o conteúdo de um vetor. Faça um programa que faça as devidas
declarações e acione os módulos para exemplificar o seu uso. Data:14/11/2022*/
void Prenche(int vetor[10], int *cont) {
  for (int i = 0; i < 10; i++) {
    printf("%d - Escreva um valor\t", i + 1);
    scanf("%d", &vetor[i]);
    if(vetor[i]<0){
      *cont+=1;
    }
      
  }
}

int *PrencherNegativo( int *vetorNegativo, int vetor[10]){
  int j=0;
  for(int i=0;i<10;i++){
    if(vetor[i]<0){
      vetorNegativo[j]=vetor[i];
      j++;
    }
  }
  return vetorNegativo;
}

int main(void) {
  int cont = 0;
  int vetor[10];
  Prenche(vetor, &cont);
  
  int *negvet,vetorNegativo[cont];
  negvet= PrencherNegativo(vetorNegativo,vetor);
  
   for(int i=0;i<cont;i++){
   printf("%d ",vetorNegativo[i]); 
  }
  
  

  return 0;
}

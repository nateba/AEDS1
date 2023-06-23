#include <stdio.h>
/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Faça um procedimento que preencha 2 vetores X e Y com 10 elementos cada um (ocupando 
as posições de 0 a 9 em cada vetor). Faça um outro procedimento que receba dois vetores 
preenchidos  e  gera  um  novo  vetor  com  os  elementos  desses  2  vetores  intercalados  de  tal 
forma que nas posições ímpares do novo vetor estejam os elementos do primeiro vetor e nas 
posições pares os elementos do segundo vetor recebido por parâmetro. Faça um 
procedimento  que  receba  e  exiba  o  conteúdo  de  um  vetor.  Faça  um  programa  que  faça  as 
devidas declarações e acione os módulos para exemplificar o seu uso. . Data:14/11/2022*/
void preencheV(int v1[], int v2[], int tam){
  printf("\n===== VETOR 1 =====\n");
  for(int i = 0; i < tam; i++){
    printf("Elemento [%d]: ", i);
    scanf("%d", &v1[i]);
  }
  printf("\n===== VETOR 2 =====\n");
  for(int j = 0; j < tam; j++){
    printf("Elemento [%d]: ", j);
    scanf("%d", &v2[j]);
  }
}
int novoVet(int v1[], int v2[], int tam){
  int tam2 = (2*tam)-1;
  int novoV[tam2];
  int j = 0;
  int k = 0;
  
  for(int i = 0; i <= tam2; i++){
    if(i%2 == 0){
      novoV[i] = v2[j];
      j++;
    } else{
      novoV[i] = v1[k];
      k++;
    } 
  }
  
  printf("\n========== LER VETOR FINAL ==========");
  for(int x = 0; x<=tam2; x++){
    printf("\nElemento [%d]: %d", x, novoV[x]);
  }


  
  return novoV[tam2];
}
int main(void) 
{
  int vetor[10];
  int vetor2[10];
  int tamanho = 10;
  int tamanho2 = tamanho*2;
  int novoV[20];



  
  preencheV(vetor, vetor2, tamanho);
  novoVet(vetor, vetor2, tamanho);

  


  return 0;
}
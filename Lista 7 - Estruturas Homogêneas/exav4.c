#include <stdio.h>

/*Nome:Nathan de Araújo Cunha Lisboa
Objetivo:Em uma cidade, sabe-se hipoteticamente que, em janeiro de 2021, não ocorreu temperatura 
inferior a 15°C, nem superior a 40°C. Faça um programa que armazene as temperaturas de 
cada dia de janeiro em um vetor (de 31 posições), calcule e imprima: 
• A menor e a maior temperatura ocorrida; 
• A temperatura média; 
• O número de dias nos quais a temperatura foi inferior a temperatura média.  Data:14/11/2022*/
void salvaTemp(int v[]){
  int maiorTemp = 0;
  int menorTemp= 0;
  int tempMedia = 0;
  int menorTempMedia = 0;
  int tempMedia2 = 0;

  for(int i = 0; i<5; i++){
    printf("Digite a temperatura do dia %d: ", i+1);
    scanf("%d", &v[i]);

    if(v[i] > maiorTemp){
      maiorTemp = v[i];
    }
    if(v[i] < menorTemp || menorTemp==0){
      menorTemp = v[i];
    }
    
    tempMedia += v[i];

    tempMedia2 += v[i];
    if(i==0){
      tempMedia2 = tempMedia2/1;
    } else{
      tempMedia2 = tempMedia2/(i);  
    }
    if(v[i] < tempMedia2){
      menorTempMedia+=1;
    }

  }
  
  tempMedia = tempMedia/5;
  
  printf("\nA temperatura média foi: %d.", tempMedia);
  printf("\nA temperatura máxima foi: %d.", maiorTemp);
  printf("\nA temperatura mínima foi: %d.", menorTemp);
  printf("\nDias abaixo da média: %d.", menorTempMedia);
}


int main(void) 
{
  int tempDias[5];
  
  salvaTemp(tempDias);

  return 0;
}
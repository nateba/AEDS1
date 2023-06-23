#include <stdio.h>
#include <math.h>



/*
Autor: Nathan Lisboa
Faça um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a 
letra for ‘A’, o procedimento calcula e escreve a média aritmética das notas do aluno, se for 
‘P’, calcula e escreve a sua média ponderada (pesos: 5, 3 e 2). Faça um programa que leia 3 
notas de N alunos e acione o procedimento para cada aluno. (N deve ser lido do teclado) 24/09/2022*/



void procedimento(float n1, float n2, float n3, char L){
  if(L=='A'){
    float mediaA = (n1+n2+n3)/3;
    printf("\nA média das notas desse aluno é: %.2f", mediaA);
  }
  else if(L=='P'){
    float mediaP = ((n1*5)+(n2*3)+(n3*2))/10;
    printf("\nA média ponderada das notas é: %.2f", mediaP);
  }  
}


int main(void) 
{
//Declarar variaveis: N,n1,n2,n3 / L;
  float nota1, nota2, nota3;
  int N;
  char Letra;

  printf("Escreva a quantidade de alunos: ");
  scanf("%d", &N);

  for(int i=1; i<=N; i++){
    printf("\n ALUNO %d \n", i);
    printf("\nEscreva a 1 nota: ");
    scanf("%f", &nota1);
    printf("\nEscreva a 2 nota: ");
    scanf("%f", &nota2);
    printf("\nEscreva a 3 nota: ");
    scanf("%f", &nota3);

    printf("\nEscreva o procedimento que quer efetuar (A para média, P para média ponderada): ");
    scanf(" %c", &Letra);
    while(Letra!='A' && Letra!='P'){
    printf("Procedimento inválido digite novamente: ");
    scanf(" %c", &Letra);
    }

    procedimento(nota1,nota2,nota3,Letra);
  }
  
  return 0;
}
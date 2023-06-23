#include<stdio.h>
/* Autor - Nathan
    Objetivo - Ler do teclado um número inteiro com 3 dígitos e mostrar ele invertido
    Data - 31/08/2022
  */

int main()
{
  //Declaração de variáveis
  
    int unidade,centena,dezena,auxiliar,num,inv;
  
   //Ler um número
  
    printf("Digite um número qualquer de 3 algarismos");
    scanf("%d",&num);
  
  //Inverter os algarismos
  
    centena=(int)num/100;
    auxiliar=num-(centena*100);
    dezena=(int)auxiliar/10;
    unidade=num-((centena*100)+(dezena*10));
    inv=(unidade*100)+(dezena*10)+(centena);
  
  //Escrever o número invertido
  
  printf("O número invertido é: %d",inv);
  
    
   
    return 0;
}

#include <stdio.h>
/*Autor Nathan Lisboa
Faça uma função que recebe a idade de um nadador por parâmetro e retorna a categoria 
desse nadador de acordo com a tabela abaixo. Faça um programa que lê a idade de um nadador e imprime a categoria retornada pela  
      função.  
Data:26/09/2022*/
// Criar a função
char Categoria(int idade) {
  if (idade >= 5 && idade <= 7)
    return 'F';
  else if (idade <= 10)
    return 'E';
  else if (idade <= 13)
    return 'D';
  else if (idade <= 15)
    return 'C';
  else if (idade <= 17)
    return 'B';
  else
    return 'A';
}

int main(void) {
  // Declarar as variáveis
  int id;

  // Ler a variável
  printf("Digite a idade do nadador: ");
  scanf("%d", &id);

  // Exbir o resultado
  printf("\nA categoria do nadador de de %d anos é %c.\n", id, Categoria(id));
  return 0;
}
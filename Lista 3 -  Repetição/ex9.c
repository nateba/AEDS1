#include <math.h>
#include <stdio.h>
/*
Autor - Nathan Lisboa
Objetivo - Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele 
comercializa.  Para  isto,  mandou  digitar  uma  linha  para  cada  mercadoria  com  o  preço  de 
compra e de venda de cada uma. A última linha contém preço de compra igual a 0. Escreva 
um programa que: 
 
a) Determine e escreva quantas mercadorias proporcionaram: 
i) Lucro < 10% 
ii) 10% <= lucro <= 20% 
iii) Lucro > 20% 
b) Determine e escreva o valor total de compra e de venda de todas as mercadorias, 
assim como o lucro total. 
  Data - 19/09/22
*/

int main(void) {
  // Declaração das variáveis
  int i = 1, lucromenor10, lucromenor20, lucromaior20;
  float p_compra, p_venda, total_compra, total_venda, total_lucro;

  lucromenor10 = 0, lucromenor20 = 0, lucromaior20 = 0, total_compra = 0,
  total_venda = 0;

  // Ler as variáveis
  printf("MERCADORIA 1\n");
  printf("Digite o preço de compra: ");
  scanf("%f", &p_compra);

  // Criar condição de repetição caso o zero não seja apertado no preço de
  // compra
  while (p_compra != 0) {
    printf("Digite o preço de venda: ");
    scanf("%f", &p_venda);

    //  Condicao pra ver o lucro
    if ((p_venda / p_compra) < 1.1) {
      lucromenor10++;
    } else if ((p_venda / p_compra) <= 2.0) {
      lucromenor20++;
    } else if ((p_venda / p_compra) > 2.0) {
      lucromaior20++;
    }

    // total de compra e venda
    total_compra += p_compra;
    total_venda += p_venda;

    i++;
    printf("MERCADORIA %d\n", i);
    printf("Digite o preço de compra: ");
    scanf("%f", &p_compra);
  }

  // Exibir os resultados
  printf(" %d mercadorias proporcionaram lucro maior que 10 porcento.\n",
         lucromenor10);
  printf(
      " %d mercadorias proporcionaram lucro entre 10 porcento e 20 porcento.\n",
      lucromenor20);
  printf(" %d mercadorias proporcionaram lucro maior que 20 porcento.\n",
         lucromaior20);

  printf("\nO total do valor de compra: R$%.2f.\n\n", total_compra);
  printf("O total do valor de venda: R$%.2f.\n\n", total_venda);
  // Total do lucro
  total_lucro = total_venda - total_compra;
  printf("O total do valor de lucro: R$%.2f.\n\n", total_lucro);

  return 0;
}
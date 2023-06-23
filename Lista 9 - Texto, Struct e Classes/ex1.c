#include <ctype.h>
#include <stdio.h>
#include <string.h>
/*Nathan de Araújo Cunha Lisboa
Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, 
e-mail, número de  horas  de  acesso, página  (S-sim ou  N-não).  Elaborar  um  algoritmo  
que calcule  e mostre um  relatório contendo o valor a pagar  por cada cliente, sabendo-se 
que  as  primeiras  20  horas  de  acesso  é  R$35,00  e  as  horas  que  excederam  tem  o  custo  de 
R$2,50 por hora. Para os clientes que têm página, adicionar R$40,00. Inserir um conjunto de 
registros (máximo 500).
Data: 7/12/2022 */
typedef struct provedor {
  int codigo;
  char email[50];
  int horas;
  char pagina;
} Prov;

int main(void) {
  Prov cliente [500];
  for(int i=0;i<500;i++){
    
  
  int valorpag=0;
  printf("Insira o codigo do cliente\n");
  scanf("%d",&cliente[i].codigo);
  printf("Insira o email do cliente\n");
  scanf(" %s",cliente[i].email);
  printf("Insira as horas de acesso\n");
  scanf("%d",&cliente[i].horas);
  printf("Insira a pagina (S ou N)\n");
  scanf(" %c",&cliente[i].pagina);
  if(cliente[i].pagina=='S'){
    valorpag=40;
  }
  if (cliente[i].horas<=20){
    printf("O valor é %d reais\n",35+valorpag);
  }
  else {
    int horas=cliente[i].horas-20;
    double valor=35+valorpag+(horas*2.50);
    printf("O valor é %.2lf reais\n",valor);
    
  }
    }
  return 0;
}
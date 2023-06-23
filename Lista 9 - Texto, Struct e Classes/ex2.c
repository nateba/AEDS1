#include <stdio.h>
/*Nathan de Araújo Cunha Lisboa
Uma   determinada   biblioteca   possui   obras   de   ciências   exatas,   humanas   e   biológicas,   
totalizando      1500  volumes,  distribuídos  em  cada  uma  das  áreas.  O  proprietário  resolveu 
agrupar as informações de cada livro no seguinte registro:  
• Código de catalogação 
• Doação (S/N) 
• Nome da obra 
• Nome do autor 
• Editora 
• Área 
 
Construir um algoritmo que: 
a) cadastre todos os volumes de cada uma das áreas em três vetores distintos 
b)  permita  ao  usuário  fazer  consulta  às  informações  cadastradas  fornecendo  o  código  de 
catalogação e a área. 
Existindo tal livro as informações são exibidas, caso contrário enviar mensagem de aviso. A 
consulta se repete até que o usuário digite código finalizador   -1.
Data: 7/12/2022 */
typedef struct Registro
{
int cod;
char doa;
char nome[30];
char autor[30];
char edit[30];
char area;
}Registro;

int main(void) 
{
  // Passar N para 500 depois
  int consulta,escolha;
  int N=1;
  Registro e[N],h[N],b[N];
  printf("Cadastro de Exatas\n\n");
  for(int i=0;i<N;i++)
    {
      printf("Digite o código do livro %d: ",i+1);
      scanf("%d",&e[i].cod);
      printf("O livro foi doado? (s/n) ");
      scanf(" %c",&e[i].doa);
      printf("Digite o nome: ");
      scanf("%s",e[i].nome);
      printf("Qual o autor do livro? ");
      scanf("%s",e[i].autor);
      printf("Qual a editora? ");
      scanf("%s",e[i].edit);
      printf("\nCadastro do %dº livro de exatas efetuado!\n\n",i+1);    
    }
  printf("Cadastro de Humanas\n\n");
  for(int i=0;i<N;i++)
    {
      printf("Digite o código do livro %d: ",i+1);
      scanf("%d",&h[i].cod);
      printf("O livro foi doado? (s/n) ");
      scanf(" %c",&h[i].doa);
      printf("Digite o nome: ");
      scanf("%s",h[i].nome);
      printf("Qual o autor do livro? ");
      scanf("%s",h[i].autor);
      printf("Qual a editora? ");
      scanf("%s",h[i].edit);
      printf("\nCadastro do %dº livro de humanas efetuado!\n\n",i+1);    
    }
  printf("Cadastro de Biológicas\n\n");
  for(int i=0;i<N;i++)
    {
      printf("Digite o código do livro %d: ",i+1);
      scanf("%d",&b[i].cod);
      printf("O livro foi doado? (s/n) ");
      scanf(" %c",&b[i].doa);
      printf("Digite o nome: ");
      scanf("%s",b[i].nome);
      printf("Qual o autor do livro? ");
      scanf("%s",b[i].autor);
      printf("Qual a editora? ");
      scanf("%s",b[i].edit);
      printf("\nCadastro do %dº livro de biológicas efetuado!\n\n",i+1);    
    }
  while (consulta!=-1){
    printf("Digite o código para consulta (-1 para sair): ");
    scanf("%d",&consulta);
    if (consulta!=-1)
    {
      printf("\n\nSelecione uma área:\n1 - Exatas\n2 - Humanas\n3 - Biológicas\nEscolha: ");
      scanf("%d",&escolha);
      switch(escolha)
        {
          case 1:
          for(int i=0;i<N;i++)
            {
              if(consulta==e[i].cod)
              {
                printf("\nNome: %s\nAutor: %s\nEditora: %s\nDoado: %c\n\n",e[i].nome,e[i].autor,e[i].edit,e[i].doa);
              }
            }
          break;
          case 2:
          for(int i=0;i<N;i++)
            {
              if(consulta==h[i].cod)
              {
                printf("\nNome: %s\nAutor: %s\nEditora: %s\nDoado: %c\n\n",h[i].nome,h[i].autor,h[i].edit,h[i].doa);
              }
            }
          break;
          case 3:
          for(int i=0;i<N;i++)
            {
              if(consulta==b[i].cod)
              {
                printf("\nNome: %s\nAutor: %s\nEditora: %s\nDoado: %c\n\n",b[i].nome,b[i].autor,b[i].edit,b[i].doa);
              }
            }
          break;
          default: printf("Opção inválida!\n\n");
        }
    }
    }
}
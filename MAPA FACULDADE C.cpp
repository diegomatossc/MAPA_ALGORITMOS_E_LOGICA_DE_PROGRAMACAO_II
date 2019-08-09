#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void inserir (void);
void Mostrar (void);
void pesquisar(void);
void Encerrar(void);
int i;
struct registro
{
          int cod[5];
          int iden[10];
          char nome[30];
          char telefone[15];
          char rua[30];
          int numero [5];
          char comple [10];
          int num [5];
};

          struct registro vetor[4];

int op;

int main(void)
{
              for(; ;)
              {
              system("cls");
              printf("\t\t\t*******CADASTRO DE CLIENTES*******\n\n\n\n");
              printf("1 Inserir um novo cadastro\n\n\n");
              printf("2 Mostrar todos os cadastros\n\n\n");
              printf("3 Pesquisar cadastros\n\n\n");
              printf("0 Encerrar\n\n\n");
              scanf("%d",&op);
              fflush(stdin);

              switch(op)
              {
              case 1: inserir();
              break;

              case 2: mostrar();
              break;

              case 3: pesquisar();
              break;

              case 4: exit(0);
              default: puts("\nPROGRAMA ENCERRADO\n");
              break;

              }

}
getchar();
}


void inserir (void)
{


                 for(i=0; i<5; i++)
                 {
                 printf("\n\nEntre com o codigo do cliente: ");
                 gets(vetor[i].iden);
                 fflush(stdin);

                 printf("\n\nEntre com o nome do cliente: ");
                 gets(vetor[i].nome);
                 fflush(stdin);

                 printf("\n\nEntre com o Telefone:");
                 gets(vetor[i].telefone);
                 fflush(stdin);

                 printf("\n\nEntre com a rua do cliente:");
                 gets(vetor[i].rua);
                 fflush(stdin);

                 printf("\n\nEntre com o numero da casa do cliente:");
                 gets(vetor[i].numero);
                 fflush(stdin);

                 printf("\n\nEntre com o complemento:");
                 gets(vetor[i].comple);

                 printf("\n\n*** NOVO CLIENTE ***\n\n");



    }
system("PAUSE");
getche();
}
void mostrar(void)
{
int i;
          for(i=0; i<10; i++)
          {
          printf("\n CODIGO DO CLIENTE: %d\n\n",vetor[i].cod);
          printf("\n NOME DO CLIENTE: %s\n\n",vetor[i].nome);
          printf("\n TELEFONE DO CLIENTE: %s\n\n",vetor[i].telefone);
          printf("\n RUA DO CLIENTE: %s\n\n",vetor[i].rua);
          printf("\n NUMERO DA RESIDENCIA: %d\n\n",vetor[i].numero);
          printf("\n COMPLEMENTO: %s\n\n",vetor[i].comple);


          }
}
void pesquisar(void)
{
int cod [6];
               printf("Qual o codigo do cliente que voce deseja remover?\n");
               scanf("%d",cod);
                   for(i=0; i<10; i++)
                   {
                     if ((strcmp(cod, vetor[i].cod))==0)
                        for( ; i<5; i++)
                        {
                        strcpy(vetor[i].cod, vetor[i+1].cod);
                        strcpy(vetor[i].nome,vetor[i+1].nome);
                        strcpy(vetor[i].telefone,vetor[i+1].telefone);
                        strcpy(vetor[i].rua,vetor[i+1].rua);
                        strcpy(vetor[i].numero,vetor[i+1].numero);
                        strcpy(vetor[i].comple,vetor[i+1].comple);
                        system("PAUSE");
                        }
                  }
getche();
}

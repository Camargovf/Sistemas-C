#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 200

char nome[SIZE][50];
char email[SIZE][50];
char cpf[SIZE][12]; // Um cpf tem no maximo 11 algorismos.
int op; //Sao variaveis globais, por isso nao estao na funcao.
void cadastro();
void pesquisa();
void lista();

int main (void){
   
    do{
        system("clear");
        printf("\n----Menu----\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair");
        scanf("%d", &op);
        switch(op){
          case 1:
                cadastro();
            break;
          case 2:
                lista();
            break;
          case 3:
                pesquisa();
            break;
          case 4:
                system("exit");
            break;
          default: 
            printf("Opcao Invalida");        }
    }while(op!=4);

}

void lista(){
  int i;
  for (i = 0; i < SIZE; i++){
  if (strlen(cpf[i]) > 0){ //compara string maior que 0
  printf("\nNome: %s\nEmail: %s\nCPF: %s", nome[i], email[i], cpf[i]);
  getchar();
    } else {
      break;
    }
        
  }
 
}
 
void cadastro() {
  int linha = 0;

  do{
      printf("\nDigite o nome: ");
      scanf("%s", nome[linha]);

      printf("\nDigite o email: ");
      scanf("%s", email[linha]);

      printf("\nDigiter o cpf: ");
      scanf("%s", cpf[linha]);

      printf("\nDigite 1 para continuar ou outro valor para sair ");
      scanf("%d", &op);

      linha++; //linha=linha+1
  } while (op == 1);
} //Fim da funcao de cadastro

void pesquisa(){
    char cpfPesquisa[12];
    char emailPesquisa[50];
    int i;

    do{
      printf("\nDigite 1 para pesquisar por CPF ou 2 para pesquisar poe email ");
      scanf("%d", &op);

      switch(op){
        case 1:
          printf("\nDigite o CPF: ");
          scanf("%s", cpfPesquisa);
          
          for(i = 0; i < SIZE; i++){
            if (strcmp(cpf[i], cpfPesquisa) == 0) {
              printf("\nNome: %s\nEmail: %s\nCPF: %s", nome[i], email[i], cpf[i]);
              break;
              
            }
          }
        break;
        case 2: 
          printf("\nDigite o E-mail: ");
          scanf("%s", emailPesquisa);

          for(i = 0; i < SIZE; i++){
            if(strcmp(email[i], emailPesquisa) == 0){
              printf("\nNome: %s\nEmail: %s\nCPF: %s", nome[i], email[i], cpf[i]);
              break;
                   system("clear");
            }
          }
        break;
        default:
          printf("\nOpcao Invalida");
           getchar();
          break;
      }
      printf("\nDigite 1 para continuar pesquisando ");
     scanf("%d", &op);
    }while(op==1);
}

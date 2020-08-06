#include<stdio.h> //biblioteca principal
#include<stdlib.h> //alocacao e memoria
#include<string.h> //funcao simular string
#include<math.h> //calculo
#include<locale.h> //biblioteca para usar pt-br2 (caracter especial)


int main(void) { // onde estiver main iniciara primeiro.  void significa que nao tem nada. ( ) 

  setlocale(LC_ALL, "Portuguese"); //aplica conjunto de caracteres com acento utilizados em português 

float lanchepreco[7] = {5.00, 8.79, 9.90, 6.89, 4.80, 3.49, 4.90};//não precisa de mais de 7 posiçoes no vetor ja que são só 7 opçoes de lanche
float vlanche[7] = {0, 0, 0, 0, 0, 0, 0};
int op = -1;

int quantidade[7] = {0, 0, 0, 0, 0, 0, 0}; //não precisa de mais de 7 posiçoes no vetor ja que são só 7 opçoes de lanche
int quantidade2 = 0;
float lanche = 0;
float valortotal = 0; //decimal definir casas com numerodecasas.f


while(op!=0) //encerra na op 0
{
	   system("clear"); // comando MAC OS
      printf("\nMenu\n\n");
      printf("Lista de Lanches\n\n Lanche                     COD      Preco\n\n 1 - Cachorro Quente        100      5,00R$\n 2 - X-salada               101      8,79R$\n 3 - X-Bacon                102      9,99R$\n");
      printf(" 4 - Misto                  103      6,89R$\n 5 - Salada                 104      4,80R$\n 6 - Agua                   105      3,49R$\n");
      printf(" 7 - Refrigerante           106      4,99R$\n\n * Continue inserindo seus pedidos, caso deseje encerrar: Digite [0] *\n");
      printf("\nDigite o item do lanche: \n\n"); // quebras de linhas.
      scanf("%d",&op);

       if (op > 7) {  // caso o usuario nao insira um numero valido.

         printf("\nSelecione um pedido válido!");
         printf("\n\nPara voltar MENU aperte qualquer tecla!");
         getchar(); // usei dois getchar para nao o clear nao limpar a tela. segurando informacoes.
         getchar();
                    }

     switch (op) //operador escolhe o case escolhido.

        {

           case 0: 

           if (quantidade[0] > 0) 
            {
           printf("você pediu %d Cachorro Quente\n", quantidade[0]);
            // inteiro, indica a posicao do vetor. 
            }
            if (quantidade[1] > 0) 
            {
           printf("você pediu %d X-Salada\n", quantidade[1]);
           
            }
            if (quantidade[2] > 0) 
            {
           printf("você pediu %d X-Bacon\n", quantidade[2]);
           
            }
            if (quantidade[3] > 0) 
            {
           printf("você pediu %d Misto\n", quantidade[3]);
         
            }
            if (quantidade[4] > 0) 
            {
           printf("você pediu %d Salada\n",quantidade[4]);
           
            }
            if (quantidade[5] > 0) 
            {
          printf("você pediu %d Água\n",quantidade[5]);
          
            }
            if (quantidade[6] > 0) 
            {
           printf("você pediu %d Refrigerante\n",quantidade[6]);
           
            }
		
			valortotal = vlanche[0] + vlanche[1] + vlanche[2] + vlanche[3] + vlanche[4] + vlanche[5] + vlanche[6];
			printf("\nFinalizando pedido... \nValor total do pedido = %.2f\n", valortotal);

                        printf("Pedido Finalizado. \n");
           break;

           case 1:

        printf("Cachorro quente\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[0] * quantidade2;
            vlanche[0]= vlanche[0] + (lanchepreco[0] * quantidade2); //indica os lanches
            quantidade[0]= quantidade[0] + quantidade2;// indica quantidade total 
         printf(" Valor do item escolhido %.2f ", lanche);
            
           break;

           case 2:

        printf("X-salada\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[1] * quantidade2; //indica valor do pedido ao usuario na ultima linha do printf
            vlanche[1] = vlanche[1] + (lanchepreco[1] * quantidade2); //indica os lanches 
            quantidade[1] = quantidade[1] + quantidade2;// indica quantidade total
         printf(" Valor do item escolhido %.2f ", lanche);

           break;

           case 3:

        printf("X-Bacon\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[2] * quantidade2; //indica valor do pedido ao usuario na ultima linha do printf
            vlanche[2] = vlanche[2] + (lanchepreco[2] * quantidade2); //indica os lanches 
            quantidade[2] = quantidade[2] + quantidade2; // indica quantidade total
         printf(" Valor do item escolhido %.2f ", lanche);

           break;

           case 4:
                  
        printf("Misto\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[3] * quantidade2; //indica valor do pedido ao usuario na ultima linha do printf
            vlanche[3] = vlanche[3] + (lanchepreco[3] * quantidade2); //indica os lanches 
            quantidade[3] = quantidade[3] + quantidade2; // indica quantidade total
         printf(" Valor do item escolhido %.2f ", lanche);

           break;

           case 5:
                
        printf("Salada\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[4] * quantidade2; //indica valor do pedido ao usuario na ultima linha do printf
            vlanche[4] = vlanche[4] + (lanchepreco[4] * quantidade2); //indica os lanches 
            quantidade[4] = quantidade[2] + quantidade2; // indica quantidade total
         printf(" Valor do item escolhido %.2f ", lanche);

           break;

           case 6:
                   
        printf("Agua\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[5] * quantidade2; //indica valor do pedido ao usuario na ultima linha do printf
            vlanche[5] = vlanche[5] + (lanchepreco[5] * quantidade2); //indica os lanches 
            quantidade[5] = quantidade[5] + quantidade2; // indica quantidade total
         printf(" Valor do item escolhido %.2f ", lanche);

            break;
            case 7:
                   
        printf("Refrigerante\n");
        printf("Digite a quantidade: \n");
        scanf("%d", &quantidade2);
            lanche = lanchepreco[6] * quantidade2; //indica valor do pedido ao usuario na ultima linha do printf
            vlanche[6] = vlanche[6] + (lanchepreco[6] * quantidade2); //indica os lanches 
            quantidade[6] = quantidade[6] + quantidade2; // indica quantidade total
         printf(" Valor do item escolhido %.2f ", lanche);

           break;
       
         }
       
}

   getchar(); //permanecer na tela a informacao (evita que o clear tire a informacao do printf)

}
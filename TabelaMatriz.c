#include <stdio.h> //biblioteca principal
#include <stdlib.h>   //alocacao e memoria
#include <string.h> //funcao simular string
#include <ctype.h> // verificar se e maiusculo ou minusculo
#include <locale.h> //biblioteca para usar pt-br2 (caracter especial)

// Variaveis

char auxiliar[10][10]; // m auxiliar 
char matriz[10][10]; // 10 por 10 maximo vetor
int M, N; //Matriz MxN
int linha, coluna, calcql, calcqc, resultotal; // variaveis inteiras d
int x, y;
int i = 0;
int j = 0;
int ascii[255]; //inteiro tabela ascii tem 255
char MaiorLxM;
float convertLxM; // decimais

int main() { //funcao principal do code a que executa primeiro


	//inicio do programa
	system("clear"); //limpa tela mac
	printf("*************************** [ PROGRAMA ON ] ***************************\n");
	printf("***** BEM VINDO  *****   \n\n");
	printf("\n\n"); // pula 2x
	printf("Qual a quantidade de linhas que deseja inserir na matriz? Limite [1-10] ");
	scanf("%d", &M); // recebe e armazena varaivel
	printf("\n");
	while (M > 10 || M < 1) { // laço repeticao enquanto for maior que 1 menor que 10

		printf("Qual a quantidade de linhas que deseja inserir na matriz? Limite [1-10] ");
		scanf("%d", &M); // armazena inteiro
		printf("\n");
	}
	printf("\n\n");
	printf("Qual a quantidade de colunas que deseja inserir na matriz? Limite [1-10] ");
	scanf("%d", &N);
	printf("\n");
	while (N > 10 || N < 1) { // laço repeticao enquanto for maior que 1 menor que 10 

		printf("Qual a quantidade de colunas que deseja inserir na matriz? Limite [1-10]  ");
		scanf("%d", &N);
		printf("\n");
	}
	printf("*********************************************************************************");
	printf("\n\n");
	printf("\n*************************** [ Elemento Char ] ***************************\n");

	for (int x = 0; x < M; x++)
	{// Repete a matrix colocada
		for (int y = 0; y < N; y++)
		{
			printf("\n Insira os caracteres [%d,%d]: ", x, y);
			scanf(" %c", &matriz[x][y]); //char
			fflush(stdin); //limpa buff
		}
	}
	printf("*************************** [ Processando o Resultado ] ***************************");
	printf("\n\n");
	printf("\n***************** [ Processado o Resultado] *****************\n");
	//agora a impresão da matriz é feita
	printf("\n\n");
	for (int x = 0; x < M; x++) // comeca com variavel x igual a zero,  vai x ate menor que numero de M (x + ele mesmo +1 sempre )
	{
		for (int y = 0; y < N; y++)
		{
			printf("Suas posições [ caracteres ] [%d][%d]:%c\t", x, y, matriz[x][y]);
			printf("\n");
			fflush(stdin); // limpa buff
		}
	}printf("\n");
	printf("*************************************************************************************");
	printf("\n\n");
	printf("\n*************************** [ Analise Repetição e Imprimir ]***************************n");
	printf("\n\n");
	// comparar se repetem e quantas vezes há ocorrencia
	for (i = 0; i < 255; i++) { // varredura do vetor ascii  vai ate 255 imposto na variavel
        ascii[i] = 0;
    }

    for (int i = 0; i < M; i++) {

        for (int j = 0; j < N; j++)
        {
            auxiliar[i][j] = matriz[i][j];

        }
      
    }

    for (int i = 0; i < M; i++) {

        for (int j = 0; j < N; j++)
        {
            ascii[auxiliar[i][j]]++;
          
        }

    }

    // as ocorrencias impressas
    for (int i = 0; i < 255; i++) {
        
        if (ascii[i] >= 1) {      // verifica a condicao 
            printf("   Caracter: %c Ocorrência: %d \n", i, ascii[i]); 
            printf("  ***************************************************\n", i, ascii[i]);
        }
    }
     MaiorLxM = toupper(matriz[0][0]); //Converte caracter minúsculo em maiúsculo.
    convertLxM = matriz[0][0];
    if (MaiorLxM == matriz[0][0]) {

        printf("\n\n%c = %.f Sendo maiúsculo  = %.2f \n\n", matriz[0][0], convertLxM, convertLxM/10);
    }
    else {

        printf("\n\n%c = %.f Sendo minúsculo  = %.2f \n\n", matriz[0][0], convertLxM, convertLxM*2);
    }
    

    system("pause");
    return 0;

	
}

// fonte http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/ 
// Onde aprendi a trabalhar com manipulacao de characters.
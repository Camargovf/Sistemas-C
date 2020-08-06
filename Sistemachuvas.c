#include <stdio.h> //biblioteca principal
#include <stdlib.h> //alocacao e memoria
#include <locale.h> //biblioteca para usar pt-br2 (caracter especial)


void reserva(); // Prototipo
void entrada(); // Prototipo
void saida(); // Prototipo
void final(); // Prototipo

int capacidade_reservatorio = 0;
int entrada_chuva [11];
int saida_agua [11];
int cal1,cal2,cal3 = 1;
int op = 5;
int maximo [11];



int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	while(op!=0)
	{
		system("clear");
		printf("***** BEM VINDO *****   \n\n");
		printf("***** Sistema para balanço anual de chuvas/mm por mês *****  \n\n");
		printf("*********************************************************** \n");
		printf("***** 1 - Armazenar capacidade máxima do reservatório ***** \n");
		printf("***** 2 - Armazenar quantos mm choveu em cada mês ***** ***\n");
		printf("***** 3 - Armazenar quantos mm foram gastos em cada mês *** \n");
		printf("***** 4 - Balanço Mensal do reservatório  ***************** \n");
		printf("*********************************************************** \n\n");
		printf("***** 0 - Sair do MENU   ********************************** \n\n");
		scanf("%d", &op);
		switch (op)
		{
			case 1:	   				          
						 reserva();
				
				system("pause");	
					break;
			case 2:	
						 entrada();
					system("pause");
					break;					
			case 3:	
						saida();
					system("pause");
					break;					
			case 4:	
					    final();
					system("pause");
					break;
					
		}
  			
  
 		 		
						 
    }
 
  getchar();
  return 0;
}

    void reserva()
    {
    	if (op==1)
    	{
    	
				printf("***** Armazene a capacidade máxima do reservatório *****" );
  			    scanf("%d", &capacidade_reservatorio);
				printf("***** Registro Concluído %d\n", capacidade_reservatorio);
				getchar();
				getchar();

	    }
	    	
  	}
  				          
	void entrada()
	{
		for( cal1 = 1; cal1 <= 12; cal1++)
 				 {
 				 	fflush(stdin);
    				
  				 	 printf("***** Armazene o quanto choveu no mês ***** %d:",cal1);
   						 scanf("%d", &entrada_chuva[cal1]);
   					
 				 }
 				 	 
	}				
				
	void saida()
		{
			for( cal2 = 0; cal2 <= 11; cal2++)
 				 {
 				 	
   					 
  				 	 printf("***** Armazene o quanto gastou mm/agua no mês ***** %d:", cal2 + 1);
   						 scanf("%d", &saida_agua[cal2]);
   						 
   					
 				 }
 				 	 
  					
		}	
	void final()
			{
				
					for( cal3 = 1; cal3 <= 12; cal3++)
  					{
  						maximo[cal3] = entrada_chuva[cal3] - saida_agua [cal3 - 1];
  						if (maximo[cal3] <= 0)
  						{
  							maximo[cal3] = 0;
  						}
  						 if (maximo[cal3] >= capacidade_reservatorio)
  						{
  							maximo[cal3] = capacidade_reservatorio;
  						} 						
						  printf("O mês %d O reservatório esta com %d mm", cal3, maximo[cal3]);
						  printf(" Aperte qualquer tecla para continuar exibindo");

   						if (maximo[cal3] >= capacidade_reservatorio)
						{
							
   						 
							printf("\t** Reservatório Cheio    *****");
   						}
   						
   							if (maximo[cal3] <= 0)
							{
								
								
								printf("\t** Reservatório Vazio    *****");
   							}	
							   fflush(stdin);
							   getchar();
   						 	 
  					}
  				
			}
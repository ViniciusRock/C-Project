#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
//permitir acentos
setlocale(LC_ALL,"Portuguese");

	//Cor do terminal
	system("color 3");
	
	char op;
	char sn;
	
	
    do {
		
	puts("*-* _Alecrim Brigaderia_ *-*\n");
	
	printf("1-Brigadeiro comum \n");
	printf("2-Beijinho \n");
	printf("3-Óreo \n");
	printf("4-Casadinho \n");
	printf("5-Bixo de pé \n");
	printf("6-Paçoca \n");
	scanf("%c",&op);

	switch(op)
	{
		case 1:
			printf("Brigadeiro comum escolhido, preço = R$ 1,00 real \n");
			break;
		
		case 2:
			printf("Beijinho escolhido, preço= R$ 1,00 real \n");
			break;	
		
		case 3:
			printf("Óreo escolhido, preço = R$ 1,00 real \n");
			break;
			
		case 4:
			printf("Casadinho escolhido, preço = R$ 1,00 real \n");
			break;
			
		case 5:
			printf("Bixo de pé escolhido, preço = R$ 1,00 real \n");
			break;
			
		case 6:
			printf("Paçoca escolhida, preço = R$ 1,00 real \n");
			break;
			
		default:
			printf("Opção inválida");
			break;
	
	printf("Deseja continuar? (S/N)");
	scanf("%c",&sn);
	}
	}
	while(sn != "S");

	

	system("pause");
	return 0;
}

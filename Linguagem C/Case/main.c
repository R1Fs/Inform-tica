#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float num1,num2,resultado;
	int op;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num1);
	printf("\nDigite outro n�mero: ");
    scanf("%f", &num2);
	printf("\n Escolha a opera�ao: \n 1 - soma \n 2 - substra��o \n 3 - Multiplica��o \n 4 - Divis�o \n\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1: resultado = num1 + num2;
		printf("\nA soma �: %.3f", resultado);
		break;
		
		
		case 2: resultado = num1 - num2;
		printf("A subtra��o �: %.3f", resultado);
		break;
		
		
		case 3: resultado = num1 * num2;
		printf("A multiplica��o �: %.3f", resultado);
		break;
		
		
		case 4: resultado = num1 / num2;
		printf("A divis�o �: %.3f", resultado);
		break;
		
		
		}	
	
		
	system("pause");
	return 0;
}

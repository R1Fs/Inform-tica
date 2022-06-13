#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float num1,num2,resultado;
	int op;
	
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("\nDigite outro número: ");
    scanf("%f", &num2);
	printf("\n Escolha a operaçao: \n 1 - soma \n 2 - substração \n 3 - Multiplicação \n 4 - Divisão \n\n");
	scanf("%d", &op);
	
	switch(op)
	{
		case 1: resultado = num1 + num2;
		printf("\nA soma é: %.3f", resultado);
		break;
		
		
		case 2: resultado = num1 - num2;
		printf("A subtração é: %.3f", resultado);
		break;
		
		
		case 3: resultado = num1 * num2;
		printf("A multiplicação é: %.3f", resultado);
		break;
		
		
		case 4: resultado = num1 / num2;
		printf("A divisão é: %.3f", resultado);
		break;
		
		
		}	
	
		
	system("pause");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2,soma,sub,div,mult,media;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &n1);  /*%f representa o local onde ser� escrita uma vari�vel float.*/
	printf("Digite o segundo n�mero: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	div = n1 / n2;
	mult = n1 * n2;
	media = (n1+n2)/2;
	
	printf("A soma �: %.1f\n", soma);
    printf("A diferen�a �: %.2f\n", sub);
	printf("A divis�o �: %.2f\n", div);
	printf("O produto �: %.1f\n", mult);
	printf("A m�dia �: %.2f\n\n", media);
	
	
	
	
	
	
	system("Pause");
	return 0;
}

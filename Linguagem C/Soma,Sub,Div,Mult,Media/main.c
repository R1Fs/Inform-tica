#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1,n2,soma,sub,div,mult,media;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &n1);  /*%f representa o local onde será escrita uma variável float.*/
	printf("Digite o segundo número: ");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	sub = n1 - n2;
	div = n1 / n2;
	mult = n1 * n2;
	media = (n1+n2)/2;
	
	printf("A soma é: %.1f\n", soma);
    printf("A diferença é: %.2f\n", sub);
	printf("A divisão é: %.2f\n", div);
	printf("O produto é: %.1f\n", mult);
	printf("A média é: %.2f\n\n", media);
	
	
	
	
	
	
	system("Pause");
	return 0;
}

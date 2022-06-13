#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	printf("Digite um número: ");
	scanf("%f",&n);
	
	
	if(n%5==0)
	printf("O número é divisível por 5");
	
	else
	printf("O número não é divisível por 5");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}

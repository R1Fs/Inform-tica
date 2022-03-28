#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio,pi,per,area;
	
	printf("Digite o valor do Raio: ");
	scanf("%f", &raio); 
	
	pi = 3,14;
	per = 2 * pi * raio;
	area = pi * (raio * raio);
	
	printf("Perímetro: %2.f\n",per);
	printf("Área: %2.f\n",area);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}

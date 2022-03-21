#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Declaração das variáveis*/
	int idade, ano;
	float altura;
	char nome [30]; /*Caracteres*/
	
	/*Entrada de dados*/
	printf("Digite seu nome: "); /*Mensagem*/
	scanf("%s", nome); /*Leitura do nome*/
	printf("Digite sua idade: "); /*Mensagem*/
	scanf("%d", &idade); /*Leitura da Idade*/
	printf("DIgite sua altura: "); /*Mensagem*/
	scanf("%f", &altura); /*Leitura da Altura*/
	
	/*Processamento*/
	ano = 2022 - idade; /*Cálculo do ano de nascimento*/
	
	
	/*Saída de Dados*/
	printf("O nome é: %s\n", nome);
	printf("A idade é: %d\n", idade);
	printf("A altura é: %f\n", altura);
	printf("O ano de nascimento é: %d\n", ano);
	/* \n --> pula linha*/
	
	

	
	system("pause");
	return 0;
}

#include<stdio.h> //biblioteca de entrada de saida
#include<stdlib.h>

main(){
	int idade, soma=0; //declara��o de vari�vel tipo inteiro
	float numero; //declara��o de vari�vel tipo real
	char sobrenome[0][1]; //declara��o de vari�vel tipo caractere e string
	
	printf("Digite a idade, numero, nome e sobrenome: ");
	
	scanf("%d", &idade); //entrada de dados tipo inteiro
	scanf("%f", &numero);//entrada de dados tipo real
//entrada de dados tipo caractere
	scanf("%s", &sobrenome);
	
	printf("%d	", idade);//saida de dados
	printf("%.1f ", numero);//saida de dados	
	printf("%s", sobrenome[1]);//saida de dados string
}

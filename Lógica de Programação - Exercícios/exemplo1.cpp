#include<stdio.h> //biblioteca de entrada de saida
#include<stdlib.h>

main(){
	int idade; //declara��o de vari�vel tipo inteiro
	
	scanf("%d", &idade); //entrada de dados tipo inteiro
	if(idade >= 18) { // condi��o idade maior ou igual a 18
		printf("Maior de idade");//bloco de c�digo caso positivo
	} else {
		printf("Menor de idade");//bloco de c�digo caso negativo
	}
}

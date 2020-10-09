#include<stdio.h> //biblioteca de entrada de saida
#include<stdlib.h>

main(){
	int idade; //declaração de variável tipo inteiro
	
	scanf("%d", &idade); //entrada de dados tipo inteiro
	if(idade >= 18) { // condição idade maior ou igual a 18
		printf("Maior de idade");//bloco de código caso positivo
	} else {
		printf("Menor de idade");//bloco de código caso negativo
	}
}

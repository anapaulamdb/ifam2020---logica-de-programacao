#include<stdlib.h>
#include<stdio.h>
main(){
	int valor, v100, v50, v10, v5, v1;

	printf("\nInforme um valor inteiro em Reais: ");
	scanf("%d", &valor);
 
	v100 = valor / 100;
	valor = valor % 100;
 
	v50 = valor / 50;
	valor = valor % 50;
 
	v10 = valor / 10;
	valor = valor % 10;
 
	v5 = valor / 5;
	valor = valor % 5;
 
	v1 = valor;
 
	printf("\nO numero de notas de 100 e: %d", (v100));
	printf("\nO numero de notas de 50 e: %d", (v50));
	printf("\nO numero de notas de 10 e: %d", (v10));
	printf("\nO numero de notas de 5 e: %d", (v5));
	printf("\nO numero de notas de 1 é: %d", (v1));
 
	printf("\n\n");
}

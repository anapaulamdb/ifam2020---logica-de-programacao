#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo que leia um número indeterminado de idades de pessoas. 
A última entrada será idade igual a 0 
e não entrará nos cálculos. Calcule e escreva a idade média das pessoas.*/
main(){
	int idade=1, cont=0, soma=0, media=0;
	while(idade != 0){
		printf("Informe a idade: ");
		scanf("%d", &idade);
		if(idade != 0){
			cont++;
			soma = soma + idade;
			
		}
	}
	media= soma/cont;
//	printf("\n qtd: %d", cont);
//	printf("\n soma: %d", soma);
	printf("\n Media das idades: %d", media);
}

#include <stdio.h>
#include <stdlib.h>
/*Escreva um algoritmo que leia um n�mero indeterminado de idades de pessoas. 
A �ltima entrada ser� idade igual a 0 
e n�o entrar� nos c�lculos. Calcule e escreva a idade m�dia das pessoas.*/
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

//Escreva um algoritmo que leia um número
//inteiro positivo n e em seguida imprima n
//linhas do chamado triângulo de Floyd O
//exemplo abaixo mostra o triângulo de
//Floyd com 4 linhas
//1
//2 3
//4 5 6
//7 8 9 10
#include <stdio.h>
main(){
	int nlinhas, num=1, aux=1;
	scanf("%d", &nlinhas);
	
	for(int i=0; i<nlinhas; i++){
		for(int j=0;j<aux; j++){
			printf(" %d", num);
			num++;	
		}
		aux++;
		printf("\n");
	}
}

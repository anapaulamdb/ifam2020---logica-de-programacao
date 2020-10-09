#include <stdlib.h>
#include <stdio.h>
 /* A confederação brasileira de natação irá promover eliminatórias para o próximo mundial.
 Fazer um algoritmo que receba a idade de vários nadadores e imprima a categoria de cada um deles, 
conforme tabela abaixo.
 A condição de parada será quando a idade informada for menor ou igual a 0.*/
main(){
	int idade;
	do{		
		printf("Idade do atleta: ");
		scanf("%d", &idade);
		if (idade > 18){
			printf("Categoria Senior\n");
		} else if (idade >= 14 && idade <= 17){
			printf("Categoria Juvenil B\n");
		} else if (idade >= 11 && idade <= 13){
			printf("Categoria Juvenil A\n");
		} else if (idade >= 8 && idade <= 10){
			printf("Categoria Infantil B\n");
		} else if (idade >= 5 && idade <= 7){
			printf("Categoria Infantil A\n");
		} else {
			printf("Sem categoria\n");
		}
		
	}while(idade > 0);
	
	
}

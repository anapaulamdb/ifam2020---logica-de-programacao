#include <stdlib.h>
#include <stdio.h>
 /* A confedera��o brasileira de nata��o ir� promover eliminat�rias para o pr�ximo mundial.
 Fazer um algoritmo que receba a idade de v�rios nadadores e imprima a categoria de cada um deles, 
conforme tabela abaixo.
 A condi��o de parada ser� quando a idade informada for menor ou igual a 0.*/
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

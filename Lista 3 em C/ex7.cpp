#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que receba como entrada um conjunto de n�meros positivos ou negativos.
 O conjunto � finalizado quando o n�mero 0 for informado. 
 Como resultado, imprima a soma dos n�meros positivos,
 a soma dos n�meros negativos e a soma das duas somas parciais.*/
 main(){
 	int num=1, somaP=0, somaN=0;
 	while(num != 0){
 		printf("Entre com o numero: ");
 		scanf("%d", &num);
 		if(num < 0){
 			somaN = somaN + num;
		} else {
			somaP = somaP + num;
		} 
	}
	printf("\nSoma de numeros positivos: %d", somaP);
	printf("\nSoma de numeros negativos: %d", somaN);
	printf("\nSoma de todos os numeros: %d", somaP + somaN);
 }

#include <stdio.h>
#include <stdlib.h>
/*Fa�a um algoritmo que leia v�rios n�meros inteiros positivos e mostre, no final, a soma dos n�meros pares
e a soma dos n�meros �mpares. O algoritmo encerra quando entrar um n�mero maior que 1000. Considere
que n�mero negativos n�o ser�o informados.*/
main(){
	int num=1, impar=0, par=0;
	while(num > 0 && num <= 1000){
		printf("Informe um numero(positivo): ");
		scanf("%d", &num);
		if(num > 0 && num <= 1000){
			if(num%2 == 0){
				par= par + num;
			} else{
				impar=impar+num;
			}	
		}
	}
	printf("Soma dos numeros pares: %d", par);
	printf("\nSoma dos numeros impares: %d", impar);	
}

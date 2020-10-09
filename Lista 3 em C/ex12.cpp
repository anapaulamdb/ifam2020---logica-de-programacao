#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia vários números inteiros positivos e mostre, no final, a soma dos números pares
e a soma dos números ímpares. O algoritmo encerra quando entrar um número maior que 1000. Considere
que número negativos não serão informados.*/
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

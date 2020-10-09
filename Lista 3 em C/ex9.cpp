#include <stdio.h>
#include <stdlib.h>
/*Construa um algoritmo que calcule a média aritmética de um conjunto de números pares que forem
fornecidos pelo usuário. O valor de finalização será a entrada do número 0 e não entrará nos cálculos.
Observe que nada impede que o usuário forneça quantos números ímpares quiser, com a ressalva de que
eles não poderão ser acumulados.*/
main(){
	float i=0, soma=0, media=0;
	int num=1;
	while(num != 0){
		printf("Digite o numero: ");
		scanf("%d", &num);
		if(num !=0 && num%2==0){
			soma= soma+ num;
			i++;
		}
	}
	media=soma/i;
	printf("Media: %.f", media);
}

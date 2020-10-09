#include <stdio.h>
//Na matemática, um Número Primo é aquele que pode ser dividido
// somente por 1 (um) e por ele mesmo.
// Por exemplo, o número 7 é primo, pois pode ser dividido apenas
// pelo número 1 e pelo número 7. Faça um programa que leia um 
//número inteiro e apresente como resultado se ele é primo ou não. 
//Caso seja primo, a resposta deve ser "Eh primo". 
//Caso contrário, a resposta será "Nao eh primo".

int main(){
	int num, primo=0;
	scanf("%d", &num);
	
	for(int i = 1; i <= num; i++){
		if (num%i == 0){
			primo++;
		}	
	}
	
	if(primo == 2){
		printf("Eh primo");
	} else {
		printf("Nao eh primo");
	}
}

#include <stdio.h>
//Na matem�tica, um N�mero Primo � aquele que pode ser dividido
// somente por 1 (um) e por ele mesmo.
// Por exemplo, o n�mero 7 � primo, pois pode ser dividido apenas
// pelo n�mero 1 e pelo n�mero 7. Fa�a um programa que leia um 
//n�mero inteiro e apresente como resultado se ele � primo ou n�o. 
//Caso seja primo, a resposta deve ser "Eh primo". 
//Caso contr�rio, a resposta ser� "Nao eh primo".

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

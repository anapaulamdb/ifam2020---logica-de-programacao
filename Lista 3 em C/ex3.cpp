#include <stdio.h>
#include <stdlib.h>

	/*
	Fa�a um algoritmo que leia o sexo, a idade e a escolaridade (1 � fundamental, 2 � m�dio e 3 � superior) 
	e determine o cargo que a pessoa pode se candidatar, dada a tabela abaixo. 
	O n�mero de pessoas a se candidatar �s vagas � incerto. 
	A condi��o de parada � quando a idade da pessoa for menor ou igual a 0.*/
main(){
	int idade=1, nivel;
	char sexo;
	while(idade > 0){	
		fflush(stdin);
		printf("Informe o sexo (F ou M): ");
		scanf("%c", &sexo);
		printf("Informe a idade: ");
		scanf("%d", &idade);
		printf("Informe a escolaridade: \n 1- Fundamental \n 2-Medio \n 3-Superior \n");
		scanf("%d", &nivel);
		
		if((sexo == 'F') && (idade > 0 && idade < 25) && (nivel == 2)){
			printf("Cargo: Recepcionista\n");
		} else if((sexo == 'M') && (idade > 40) && (nivel == 1)){
			printf("Cargo: Servente \n");
		} else if((sexo == 'M'|| sexo == 'F') && (idade > 0 && idade < 30) && (nivel == 3)){
			printf("Cargo: Auxiliar de RH \n");
		} else {
			printf("N�o ha vagas disponiveis\n");
		}	
	}
}

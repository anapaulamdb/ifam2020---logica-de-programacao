#include <stdio.h>
#include <stdlib.h>
/*Construa um algoritmo que leia o sexo de uma quantidade desconhecida de pessoas. Quando uma pessoa
for do sexo feminino, o valor lido será “F”. Se for masculino, será “M”. Quando o valor for diferente de
“M” ou “F”, informe a quantidade de pessoas do sexo feminino e do sexo masculino. Informe também a
porcentagem de pessoas do sexo feminino e do sexo masculino.*/
main(){
	char sexo='F';
	int i=0, contf=0, contm=0;
	while(sexo == 'F' || sexo == 'M'){
		fflush(stdin);
		printf("Informe o sexo: F/M ");
		scanf("%c", &sexo);
		
		if(sexo == 'F'){
			contf++;
			i++;
		} else if (sexo == 'M'){
			contm++;
			i++;
		}
	}
	printf("Quantidade sexo feminino: %d - %d%%", contf, 100*contf/i);
	printf("\nQuantidade sexo masculino: %d - %d%%", contm, 100*contm/i);
}

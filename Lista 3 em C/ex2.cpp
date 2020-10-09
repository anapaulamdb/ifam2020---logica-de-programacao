#include <stdlib.h>
#include <stdio.h>
 /* Criar um algoritmo que leia o salário de uma quantidade indeterminada de pessoas. 
 Imprima o desconto do INSS de cada pessoa, segundo tabela abaixo. 
 A condição de finalização é salário menor ou igual a 0.
 Salário								 Desconto
Menor ou igual a R$ 600      					Isento
Maior que R$ 600 e menor ou igual a R$ 1.200	10%
Maior que R$ 1.200 e menor ou igual a R$ 2.000	15%
Maior que R$ 2.000								20%*/
main(){
	float salario=1, total=0;
	
	while(salario > 0){
		printf("Informe o salario: ");
		scanf("%f", &salario);
		if(salario <= 600){
			total = salario;
		} else if(salario > 600 && salario <= 1200){
			total = salario - salario *0.1;
		} else if(salario > 1200 && salario <= 2000){
			total = salario - salario *0.15;
		} else{
			total = salario - salario *0.2;
		}
		printf("Salario: %.2f \n", total);
	}
}

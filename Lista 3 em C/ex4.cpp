#include <stdio.h>
#include <stdlib.h>
	/* Faça um algoritmo que leia a quantidade de um produto a ser comprada e o tipo do comprador. 
		Se o tipo do comprador for “normal”, o cálculo é o apresentado na tabela; se for “associado”, 
		ele paga R$ 0,70/un para quantidade menor ou igual a 5000, sendo maior, 
		paga o valor apresentado na tabela; se for “parceiro”, ele tem um desconto de 30% no valor final.
	 O algoritmo deve se repetir até que a quantidade do produto seja menor ou igual a 0. */
main(){
	int qtd=1, tipo;
	float total=0;
	while(qtd > 0){
		printf("Informe a quantidade a ser comprada: ");
		scanf("%d", &qtd);
		printf("Tipo de comprador: \n1 - Normal \n2 - Associado \n3 - Parceiro \n");
		scanf("%d", &tipo);
		
		switch(tipo){
			case 1:{
				if(qtd <= 1000){
					total = qtd * 1.10;
				} else if(qtd > 1000 && qtd <= 5000){
					total = qtd * 0.70;
				} else if(qtd > 5000 && qtd <= 10000){
					total = qtd * 0.40;
				} else {
					total = qtd * 0.30;
				}
				break;
			}
			case 2:{
				if(qtd <= 5000){
					total = qtd * 0.70;
				} else if(qtd > 5000 && qtd <= 10000){
					total = qtd * 0.40;
				} else {
					total = qtd * 0.30;
				}
				break;
			}
			case 3:{
				if(qtd <= 1000){
					total = qtd * 1.10;
					total = total - total * 0.3;
				} else if(qtd > 1000 && qtd <= 5000){
					total = qtd * 0.70;
					total = total - total * 0.3;
				} else if(qtd > 5000 && qtd <= 10000){
					total = qtd * 0.40;
					total = total - total * 0.3;
				} else {
					total = qtd * 0.30;
					total = total - total * 0.3;
				}
				break;
			}
		}
		printf("%2.f", total);

	}
}

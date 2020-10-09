#include <stdio.h>
#include <stdlib.h>
/*Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma adega, tendo
como dados de entrada tipos de vinho, sendo: “T” para tinto, “B” para branco e “R” para rosê. Quando o
tipo de vinho for diferente dos apresentados acima, mostre a porcentagem de cada tipo de vinho sobre o
total geral de vinhos. A quantidade de vinhos é desconhecida.*/

main(){
	char tipo = 'T';
	int i=0, tinto=0, branco=0, rose=0;
	
	while(tipo == 'T' || tipo == 'B' || tipo == 'R'){
		printf("Escolha o tipo de vinho: \nTinto -> T\nBranco -> B\nRose -> R \n");
		scanf("%c", &tipo);
		
		fflush(stdin);
		if(tipo == 'T'){
			tinto++;
			i++;;
		}
		if(tipo == 'B'){
			branco++;
			i++;
		}
		if(tipo == 'R'){
			rose++;
			i++;
		}
	} 
	printf("Vinho Tinto: %d%%", 100*tinto/i);
	printf("\nVinho Branco: %d%%", 100*branco/i);
	printf("\nVinho Rose: %d%%", 100*rose/i);
}

#include<stdio.h>
int main(){
	int nota, idade, otimo=0, regular=0, x=0;
	float bom=0;
	for(int i=0; i<6; i++){
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		printf("Dê sua nota ao filme: ");
		scanf("%d", &nota);
		
		switch (nota){
			case 1: 
				regular++;
			case 2:
				bom++;
			case 3:
				otimo+= idade;
				x++;
		}
	}
	printf("Media das idade (otimo) %d", otimo/x);
	printf("\nQtd de pessoas (regular) %d", regular);
	printf("\nPorcentagem de pessoas (bom) %f", (bom/15)*100);	
}

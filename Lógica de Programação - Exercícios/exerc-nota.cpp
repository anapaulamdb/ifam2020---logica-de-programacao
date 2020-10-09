#include <stdio.h>
int main(){
	int nota, idade, qtdotimo=0, qtdreg=0, x3=0;
	float qtdbom=0;
	for(int i=0; i<6; i++){
		printf("Informe sua idade: ");
		scanf("%d", &idade);
		printf("Dê sua nota ao filme: ");
		scanf("%d", &nota);
		
	switch (nota){
		case 1: 
			qtdreg++;
		case 2:
			qtdbom++;
		case 3:
			qtdotimo+= idade;
			x3++;
	}
	}
	printf("Media das idade (otimo) %d", qtdotimo/x3);
	printf("Qtd de pessoas (regular) %d", qtdreg);
	printf("Porcentagem de pessoas (bom) %f", (qtdbom/15)*100);
	
}

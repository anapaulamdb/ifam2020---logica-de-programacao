#include <stdio.h>
int main(){
	int numero, un, dez, cen, resto, soma=0;
	char v1[20][10] = {"um", "dois","tres", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"};
	char v2[10][15] = {"vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"};
	char v3[10][15] = {"cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos", "setecentos", "oitocentos", "novecentos"};

	scanf("%d", &numero);
	cen= numero/100;
	resto = numero - cen * 100;
	dez = resto/10;
	resto = resto - dez*10;
	un = resto;
	
	if (numero < 1000){
		if (dez < 2){
			soma = dez* 10 +un;
			printf("%s e %s ", v3[cen-1], v1[soma-1]);
		} else {
			printf("%s e %s e %s ", v3[cen-1], v2[dez-2], v1[un-1]);
		}
	} else {
		printf("numero invalido");
	}
}

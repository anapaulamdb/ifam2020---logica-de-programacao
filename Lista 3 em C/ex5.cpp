#include <stdio.h>
#include <stdlib.h>
/*Uma loja utiliza o c�digo �V� para transa��o � vista e �P� para transa��o � prazo.
Fa�a um algoritmo que receba o c�digo e o valor das transa��es. 
Quando o c�digo for diferente de �V� ou �P�, calcule e mostre:
a. O valor das compras � vista;
b. O valor das compras a prazo;
c. O valor total das compras efetuadas.*/
main(){
	int cont=0;
	float valor, totalv=0, totalp=0;
	char codigo = 'V';
	while(codigo == 'V' || codigo == 'P'){
		fflush(stdin);
		printf("Tipo de transa��o: (V - a vista)(P -  a prazo) ");
		scanf("%c", &codigo);
		printf("Valor da compra: ");
		scanf("%f", &valor);
		
		if(codigo == 'V'){
			totalv = totalv + valor;
			cont++;
		} else if( codigo == 'P'){
			totalp = totalp + valor;
			cont++;	
		}
	}
		printf("\nValor total das compras a vista: %2.f", totalv);
		printf("\nValor total das compras a prazo: %2.f", totalp);
		printf("\nTotal de compras: %d\n", cont);
}

#include<stdlib.h>
#include<stdio.h>
main(){
	int  m01, v100, v50, v20, v10, v5, v2, m1, m50, m25, m10, m5;
	float valor;
	printf("\nInforme um valor em Reais: ");
	scanf("%f", &valor);
 
	v100 = valor / 100;
	valor = valor - v100 * 100;
 
	v50 = valor / 50;
	valor = valor - v50 * 50;
 
 	v20 = valor / 20;
	valor = valor - v20 * 20;
	
	v10 = valor / 10;
	valor = valor - v10 * 10;
 
	v5 = valor / 5;
	valor = valor - v5 * 5;
	
	v2 = valor / 2;
	valor = valor - v2 * 2;
 
	m1 = valor / 1;
	valor = valor - m1 * 1;
	
	m50 = valor / 0.5;
	valor = valor - m50 * 0.5;
	
	m25 = valor / 0.25;
	valor = valor - m25 * 0.25;
	
	m10 = valor / 0.1;
	valor = valor - m10 * 0.1;
	
	m5 = valor / 0.05;
	valor = valor - m5 * 0.05;
	
	m01 = valor / 0.01;
	valor = valor - m01 * 0.01;
 
	printf("NOTAS: \n%d notas(s) de R$ 100.00", (v100));
	printf("\n%d notas(s) de R$ 50.00", (v50));
	printf("\n%d notas(s) de R$ 20.00", (v20));
	printf("\n%d notas(s) de R$ 10.00", (v10));
	printf("\n%d notas(s) de R$ 5.00", (v5));
	printf("\n%d notas(s) de R$ 2.00\n", (v2));
	
	printf("MOEDAS: \n%d moeda(s) de R$ 1.00", (m1));
	printf("\n%d moeda(s) de R$ 0.50", (m50));
	printf("\n%d moeda(s) de R$ 0.25", (m25));
	printf("\n%d moeda(s) de R$ 0.10", (m10));
	printf("\n%d moeda(s) de R$ 0.05", (m5));
	printf("\n%d moeda(s) de R$ 0.01", (m01));
 
	printf("\n\n");
}

#include <stdio.h>
main(){
	int n, i, j;
	float menor=1000, valor=0, total=0;
	scanf("%d", &n);
	float m[n][2];
	for(i=0; i < n; i++){
		for(j=0;  j < 2; j++){
			scanf("%f", &m[i][j]);
			valor = m[i][0] * 1000;	
			total = valor / m[i][1];
		}
		if(total < menor){
			menor = total;
		}	
	}
	
	printf("%.2f ", menor);
}

#include <stdio.h>
main(){
	long int n, i;
	float p, g, menor=1000, valor=0, total=0;
	scanf("%ld", &n);
	i=n;
	do {
		scanf("%f %f", &p, &g);
		total = (p * 1000)/ g;
		if(total < menor){
			menor = total;
		}
		i--;
	} while(i > 0);
	
	printf("%.2f ", menor);
}

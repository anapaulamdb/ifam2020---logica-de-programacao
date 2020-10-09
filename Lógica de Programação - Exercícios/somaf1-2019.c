#include<stdio.h>
#include<stdlib.h>

main(){
	long int n, k;
	int soma = 0, total = 0, aux =0;
	
	scanf("%ld%ld", &n, &k);
	
	int lista[n]; // 2 0 1 1 0 0 8 4 1 3
	
	for(int i=0; i<n; i++){
		scanf("%d", &lista[i]);
	}
	for(int i=0; i<n;i++){
		soma= soma+ lista[i];
		if(soma <= k){
			if(soma == k){
				if (k==0){
					aux++;
					total+=aux;
				} else {
				total++;
				}
			}
		} else if(lista[i]<=k){
			soma = lista[i];
			if(soma == k){
				total++;	
			}
		} else {
			soma =0;
			aux=0;
		}
	}
	printf("%d",  total);
}

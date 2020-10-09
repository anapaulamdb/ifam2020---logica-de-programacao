#include<stdio.h>
#include<stdlib.h>

main(){
	long int n, k;
	int soma = 0, total = 0;
	scanf("%ld %ld", &n, &k);
	int lista[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &lista[i]);
	}
	
	for(int i=0; i<n;i++){
		soma+= lista[i];
		if(soma <= k){
			if(soma == k){
				total++;	
			}
		} else if(lista[i]<=k){
			soma = lista[i];
		} else {
			soma =0;
		}
	
	}
	printf("%d",  total);
}



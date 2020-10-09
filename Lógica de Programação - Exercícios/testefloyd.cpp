#include<stdio.h>
main(){
	int a, aux=0, cont=0, i;
	
	scanf("%d",&a);
	
	while(cont != a){
		printf("%d",i+1);
		if(i - aux == cont){
			aux = i + 1;
			cont++;
			printf("\n");
		}
		i++;
	}
	
}

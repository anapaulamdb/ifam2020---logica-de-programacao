#include <stdio.h>
main(){
	int x, soma=0;
	for (x=1; x<=500; x++){
		if(x%2==1){
			soma= soma+x;	
		}
	}
	printf("	%d", soma);
}



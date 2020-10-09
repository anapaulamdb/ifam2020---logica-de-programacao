#include <stdlib.h>
#include <stdio.h>

main(){
	int n1, n2;
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	if (n1>n2){
		printf("%d é maior", n1);
	} else {
		printf("%d é maior", n2);
	}
}

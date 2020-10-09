#include<stdlib.h>
#include<stdio.h>
main(){
	int j=60, i=1;
	do{
		printf("I=%d J=%d \n", i, j);
		j-=5;
		i+=3;
	} while(j>=0);	
}

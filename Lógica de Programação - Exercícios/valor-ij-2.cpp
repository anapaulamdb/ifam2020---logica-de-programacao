#include<stdlib.h>
#include<stdio.h>
main(){
	int j=7, i=1;
	do{
		for(int x=0; x<3; x++){
			printf("I=%d J=%d \n", i, j);
			j--;
		}
		i+=2;
		j+=5;
	} while(i<10);	
}

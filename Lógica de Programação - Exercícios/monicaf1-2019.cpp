#include<stdio.h>
#include<stdlib.h>
main(){
	int m, a, b, c;
	scanf("%d", &m);
	scanf("%d", &a);
	scanf("%d", &b);
	c = m - (a+b);
	if(a > b && a > c){
	    printf("%d", a);
	} else if (b > a && b > c){
	    printf("%d",b);
	} else {
	    printf("%d",c);
	}	
}
// int res = max(a, max(b,c));

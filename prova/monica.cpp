#include <stdio.h>
int main(){
	
	int m, a, b, c;
	scanf("%d %d %d", &m, &a, &b);
	c = m - (a+b);
	
	if(a > b && a > c){
	    printf("%d", a);
	} else if (b > a && b > c){
	    printf("%d", b);
	} else {
	    printf("%d", c);
	}
}

#include <stdio.h>

main(){
	int a = 0, b = 1, c, n, i;
	scanf("%d", &n);
	if(n==1){
		printf("%d", a);
	} else if(n==2){
		printf("%d", b);
	} else {
		for(i=3; i<=n; i++){
			c=a+b;
			a=b;
			b=c;
		}
		printf("	%d", c);
	}
}

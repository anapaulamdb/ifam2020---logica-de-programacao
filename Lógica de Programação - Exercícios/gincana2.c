#include <stdio.h>

int mdc();

int mdc(int a, int b){
	int r;
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main(){
	long int n, m, x;
	scanf("%ld %ld", &n, &m);
	
	for (x = m; x > 0; x--) {
		if(n > x){
	    	if(mdc(n, x) != 1){
	    		continue;
			}
			break;
		} else {
			if(mdc(x, n) != 1){
				continue;
			}
			break;
		}
	}
	printf("%ld", x);
}

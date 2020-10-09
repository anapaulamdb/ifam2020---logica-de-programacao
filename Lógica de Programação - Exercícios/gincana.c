#include <stdio.h>

int main() {
	long int n, m, x, aux, maior;
	
	int flag = 1, i;
	
	scanf("%ld", &n);
	scanf("%ld", &m);
	
	if (n > m) {
		maior = n;
	} else {
		maior = m;
	}
	
	aux = n;
	
	for (x = m; x > 0; x--) {
		for (i = 2; i <= maior; i++) {
			if (aux % i == 0 && x % i == 0) {
				flag = 0;
				aux = n;
				break;
			}	
			if (aux % i == 0) {
				aux = aux / i;
			} else {
				m = m / i;
			}
		}
		
		if (flag) {
			printf("%ld", x);
			break;
		} else {
			flag = 1;
		}
	}
}

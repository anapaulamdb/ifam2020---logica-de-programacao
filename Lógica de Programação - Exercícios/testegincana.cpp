#include <stdio.h>
	
long int n, m, x, aux, maior;
int flag = 1, i;
int verifica();
int achaMaior();

int achaMaior(int a, int b){
	if (n > m) {
		maior = n;
	} else {
		maior = m;
	}
	return maior;
}
int verifica(int m, int n, int aux, int maior, int x, int flag){
 	int i = 2;
	do{
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
		i++;
	} while (i <= maior);
	return flag;
}

int main() {
	scanf("%ld", &n);
	scanf("%ld", &m);
	
	maior = achaMaior(n, m);
	aux = n;
	for (x = m; x > 0; x--) {
		flag = verifica(m, n, aux, maior, x, flag);
		
		if (flag) {
			break;
		} else {
			flag = 1;
		}
	}
	printf("%ld", x);
}


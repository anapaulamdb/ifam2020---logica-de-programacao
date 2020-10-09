#include <stdio.h>

long int n, m, x, maior, menor;
int mdc();
int achaMaior();
int achaMenor();

int mdc(int a, int b){
	int r;
	while(b != 0){
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int achaMaior(int a, int b){
	int maior;
	if(a > b){
		maior = a;
	}else {
		maior = b;
	}
	return maior;
}
int achaMenor(int a, int b){
	int menor;
	if(a > b){
		menor = b;
	}else {
		menor = a;
	}
	return menor;
}
int main(){
	scanf("%ld %ld", &n, &m);
	
	maior = achaMaior(n, m);
	menor = achaMenor(n, m);
	
	while(mdc(maior, menor) != 1){
		m--;
		maior = achaMaior(n, m);
	    menor = achaMenor(n, m);
	}
	x = m;
	printf("%ld", x);
}

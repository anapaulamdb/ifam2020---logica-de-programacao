#include <stdio.h>
/*
Por exemplo, se N=9 M=6 a sua turma deve levar uma delegação de X=5 pessoas, 
já que, para esse valor, a única divisão possível é em grupos de K=1 pessoa e, para X=6, os grupos seriam de 3 pessoas.
Entrada:: A primeira e única linha contém dois inteiros N e M, representando respectivamente o tamanho da delegação rival e o tamanho da sua turma.
Saída:: Seu programa deve produzir uma única linha, contendo um inteiro X, 
o maior tamanho possível da delegação da sua turma para o qual a gincana aconteça com grupos de uma pessoa.
*/

main(){
	long int n, m, x=0;
	int i;
	scanf("%ld%ld", &n, &m);
	
	for(i = m; i > 0; i--){
		if (m > 99){
			if(m > 99 &&  i % 2 != 0 && i % 3 != 0  &&  i % 5 != 0  &&  i % 7 != 0  &&  i % 11 != 0){
				x = i;
				break;
			} 
		} else {
			if (i % 2 != 0 && i % 3 != 0){
				x = i;
				break;
			} else {
				continue;
			}
		}
	}
	printf("%ld", x);
}


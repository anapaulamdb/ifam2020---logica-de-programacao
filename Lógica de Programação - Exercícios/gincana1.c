#include <stdio.h>
/*
Por exemplo, se N=9 M=6 a sua turma deve levar uma delega��o de X=5 pessoas, 
j� que, para esse valor, a �nica divis�o poss�vel � em grupos de K=1 pessoa e, para X=6, os grupos seriam de 3 pessoas.
Entrada:: A primeira e �nica linha cont�m dois inteiros N e M, representando respectivamente o tamanho da delega��o rival e o tamanho da sua turma.
Sa�da:: Seu programa deve produzir uma �nica linha, contendo um inteiro X, 
o maior tamanho poss�vel da delega��o da sua turma para o qual a gincana aconte�a com grupos de uma pessoa.
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


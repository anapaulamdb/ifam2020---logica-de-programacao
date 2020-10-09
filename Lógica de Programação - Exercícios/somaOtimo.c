#include <stdio.h>

long int v[500002];
long int n, k, i;
long int x, soma = 0, cont = 0, cont_zero = 0, zero_esq = 0, zero_dir = 0, inicio, fim, contar = 0;

void contaZerosEsq();
void procuraNovoInicio();

void contaZerosEsq() {
	i = inicio;
	while (v[i] == 0) {
		zero_esq++;
		i++;
	}
}

void procuraNovoInicio() {
	soma -= v[inicio];
	if (soma == k) {
		cont++;
	}
	inicio++;
}

int main() {
	scanf("%ld", &n);
	scanf("%ld", &k);
	
	for (i = 1; i <= n; i++) {
		scanf("%ld", &x);
		v[i] = x;
	}

	//Se k for 0, a contagem segue essa l�gica
	if (k == 0) {
		for (i = 1; i <= n; i++) {
			if (v[i] == 0) {
				cont_zero++;
			} else {
				cont += cont_zero * (cont_zero + 1) / 2;
				cont_zero = 0;
			}
		}
		
		if (cont_zero != 0) {
			cont += cont_zero * (cont_zero + 1) / 2;
		}
	} else {
		inicio = fim = 1;
		
		while (fim <= n) {			
			soma += v[fim];

			/*
			*	se a soma for igual a k e o valor somado for zero, significa que foi adicionado um zero � direita
			*	esse valor ser� somado ao resultado apenas quando a soma for maior do que k
			*/	
			if (soma == k) {
				if (v[fim] == 0) {
					zero_dir++;
				} else {
					//se o valor somado for diferente de zero, devemos incrementar a resposta
					cont++;
				}
			} else if (soma < k) {
				//se a soma for menor que k e o valor adicionado for zero, significa que temos um zero � esquerda
				if (v[fim] == 0) {
					/*
					*	no entanto, precisamos verificar se esse zero � esquerda n�o est� intercalado
					*	ou seja, se j� est�vamos contando zeros � esquerda e depois apareceu um n�mero maior que zero
					*	os zeros que surgirem ap�s esse n�mero maior que zero n�o devem ser acrescentados na vari�vel
					*	que acumula o total de zeros � esquerda
					*/
					if (contar == 0) {
						zero_esq++;
					}
				} else if (zero_esq > 0) {
					/*
					*	se j� estamos contando zeros � esquerda e o n�mero adicionado � soma for maior que zero
					*	a vari�vel contar n�o permitir� que a contagem de zeros � esquerda seja incrementada
					*/
					contar = 1;
				}
			} else {
				//ao entrar nesse bloco, soma ser� maior que k
				
				/*
				*	se a soma for maior que k e temos zeros � esquerda
				*	precisamos garantir que a contagem de zeros � esquerda n�o seja incrementada
				*/
				if (zero_esq > 0) {
					contar = 1;
				}
				
				/*
				*	se o �ltimo valor adicionado for removido e a soma for igual a k
				*	devemos incrementar o contador do resultado
				*/
				if (soma - v[fim] == k) {
					if (v[inicio] == 0) {
						if (zero_esq == 0) {
							contaZerosEsq();
						}
						if (v[fim - 1] == 0) {
							//esse incremento ocorre quando o in�cio e o fim do ret�ngulo s�o iguais a zero
							cont += zero_esq + zero_dir + zero_esq * zero_dir;
						} else {
							//esse incremento ocorre quando apenas o in�cio � igual a zero
							cont += zero_esq;
						}
						zero_esq = 0;
					} else {
						//esse incremento ocorre quando apenas o fim � igual a zero
						cont += zero_dir;
					}
				}
				
				/*
				*	se o �ltimo valor adicionado for maior que k, significa que devemos iniciar um novo ret�ngulo
				*	assim, devemos zerar a soma, colocar o in�cio como o pr�ximo item da sequ�ncia de n�meros
				*	e zerar a quantidade de zeros � esquerda, pois estamos iniciando um novo ret�ngulo
				*/
				
				if (v[fim] > k) {
					inicio = fim + 1;
					soma = 0;
					zero_esq = 0;
					contar = 0;
				} else {
					/*
					*	se o �ltimo valor adicionado n�o for maior que k, devemos procurar um novo ponto para iniciar o ret�ngulo
					*	isso significa que devemos remover os valores que foram adicionados inicialmente, um a um
					*/
					while (soma > k) {
						//essa verifica��o � feita para que os zeros � esquerda sejam decrementados
						if (v[inicio] == 0 && zero_esq > 0) {
							zero_esq--;
							/*
							*	se o �ltimo valor adicionado for retirado da soma e o resultado for igual a k
							*	devemos incrementar o contador do resultado
							*/
							if (soma - v[fim] == k) {
								cont++;
							}
						}
						//procedimento que procura o in�cio de um novo ret�ngulo
						procuraNovoInicio();
					}
					
					//se o novo in�cio for igual a zero, devemos contar quantos zeros � esquerda existem
					if (v[inicio] == 0 && soma <= k) {
						zero_esq = 0;
						contaZerosEsq();
					}

					//verifica se permitir� contar como zero � esquerda os pr�ximos zeros que surgirem
					if (zero_esq == 0) {
						contar = 0;
					} else {
						contar = 1;
					}
				}
				zero_dir = 0;
			}
			fim++;
		}
		
		//se atingir o final, mas ainda for poss�vel combinar resultados, realiza os devidos incrementos
		if (soma == k && inicio != fim) {
			if (v[inicio] == 0 && v[fim - 1] == 0) {
				if (zero_esq == 0) {
					contaZerosEsq();
				}
				cont += zero_esq + zero_dir + zero_esq * zero_dir;
			} else {
				while (soma == k && inicio < fim) {
					procuraNovoInicio();
				}
				cont += zero_dir;
			}
		}
	}

	printf("%ld", cont);
}

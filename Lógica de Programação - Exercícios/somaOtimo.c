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

	//Se k for 0, a contagem segue essa lógica
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
			*	se a soma for igual a k e o valor somado for zero, significa que foi adicionado um zero à direita
			*	esse valor será somado ao resultado apenas quando a soma for maior do que k
			*/	
			if (soma == k) {
				if (v[fim] == 0) {
					zero_dir++;
				} else {
					//se o valor somado for diferente de zero, devemos incrementar a resposta
					cont++;
				}
			} else if (soma < k) {
				//se a soma for menor que k e o valor adicionado for zero, significa que temos um zero à esquerda
				if (v[fim] == 0) {
					/*
					*	no entanto, precisamos verificar se esse zero à esquerda não está intercalado
					*	ou seja, se já estávamos contando zeros à esquerda e depois apareceu um número maior que zero
					*	os zeros que surgirem após esse número maior que zero não devem ser acrescentados na variável
					*	que acumula o total de zeros à esquerda
					*/
					if (contar == 0) {
						zero_esq++;
					}
				} else if (zero_esq > 0) {
					/*
					*	se já estamos contando zeros à esquerda e o número adicionado à soma for maior que zero
					*	a variável contar não permitirá que a contagem de zeros à esquerda seja incrementada
					*/
					contar = 1;
				}
			} else {
				//ao entrar nesse bloco, soma será maior que k
				
				/*
				*	se a soma for maior que k e temos zeros à esquerda
				*	precisamos garantir que a contagem de zeros à esquerda não seja incrementada
				*/
				if (zero_esq > 0) {
					contar = 1;
				}
				
				/*
				*	se o último valor adicionado for removido e a soma for igual a k
				*	devemos incrementar o contador do resultado
				*/
				if (soma - v[fim] == k) {
					if (v[inicio] == 0) {
						if (zero_esq == 0) {
							contaZerosEsq();
						}
						if (v[fim - 1] == 0) {
							//esse incremento ocorre quando o início e o fim do retângulo são iguais a zero
							cont += zero_esq + zero_dir + zero_esq * zero_dir;
						} else {
							//esse incremento ocorre quando apenas o início é igual a zero
							cont += zero_esq;
						}
						zero_esq = 0;
					} else {
						//esse incremento ocorre quando apenas o fim é igual a zero
						cont += zero_dir;
					}
				}
				
				/*
				*	se o último valor adicionado for maior que k, significa que devemos iniciar um novo retângulo
				*	assim, devemos zerar a soma, colocar o início como o próximo item da sequência de números
				*	e zerar a quantidade de zeros à esquerda, pois estamos iniciando um novo retângulo
				*/
				
				if (v[fim] > k) {
					inicio = fim + 1;
					soma = 0;
					zero_esq = 0;
					contar = 0;
				} else {
					/*
					*	se o último valor adicionado não for maior que k, devemos procurar um novo ponto para iniciar o retângulo
					*	isso significa que devemos remover os valores que foram adicionados inicialmente, um a um
					*/
					while (soma > k) {
						//essa verificação é feita para que os zeros à esquerda sejam decrementados
						if (v[inicio] == 0 && zero_esq > 0) {
							zero_esq--;
							/*
							*	se o último valor adicionado for retirado da soma e o resultado for igual a k
							*	devemos incrementar o contador do resultado
							*/
							if (soma - v[fim] == k) {
								cont++;
							}
						}
						//procedimento que procura o início de um novo retângulo
						procuraNovoInicio();
					}
					
					//se o novo início for igual a zero, devemos contar quantos zeros à esquerda existem
					if (v[inicio] == 0 && soma <= k) {
						zero_esq = 0;
						contaZerosEsq();
					}

					//verifica se permitirá contar como zero à esquerda os próximos zeros que surgirem
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
		
		//se atingir o final, mas ainda for possível combinar resultados, realiza os devidos incrementos
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

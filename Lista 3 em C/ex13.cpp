#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia as médias finais de vários alunos de uma turma e mostre a maior média, a
menor média e a média aritmética da turma. O algoritmo encerra quando encontrar uma média negativa.*/
main(){
	float media=0, menor=0, maior=0, soma=0;
	int i=0;
	printf("Informe a media do aluno: ");
	scanf("%f", &media);
	if(media >=0){
		menor=media;
		maior=media;
		i++;
		soma=soma+media;
	}	
	while(media >= 0){
		printf("Informe a media do aluno: ");
		scanf("%f", &media);
		if(media >=0){
			if(media > maior){
				maior = media;
			}else if(media<menor){
				menor = media;
			}
			i++;
			soma = soma + media;
		}
	}
	printf("Maior media: %.2f\n", maior);
	printf("Menor media: %.2f\n", menor);
	printf("Media aritmetica: %.2f", soma/i);
//	printf("total %d", i);
//	printf("soma %.2f", soma);
}

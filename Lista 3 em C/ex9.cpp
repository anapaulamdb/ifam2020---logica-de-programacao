#include <stdio.h>
#include <stdlib.h>
/*Construa um algoritmo que calcule a m�dia aritm�tica de um conjunto de n�meros pares que forem
fornecidos pelo usu�rio. O valor de finaliza��o ser� a entrada do n�mero 0 e n�o entrar� nos c�lculos.
Observe que nada impede que o usu�rio forne�a quantos n�meros �mpares quiser, com a ressalva de que
eles n�o poder�o ser acumulados.*/
main(){
	float i=0, soma=0, media=0;
	int num=1;
	while(num != 0){
		printf("Digite o numero: ");
		scanf("%d", &num);
		if(num !=0 && num%2==0){
			soma= soma+ num;
			i++;
		}
	}
	media=soma/i;
	printf("Media: %.f", media);
}

#include <stdio.h>
#include <stdlib.h>
main(){
	int cod=1, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
	int total=0;	
	while(cod!=0){
		printf("Informe o codigo do candidato:\n");
		printf("1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n4 - Candidato 4\n5 - Nulo\n6 - Branco\n");
		scanf("%d", &cod);
		if(cod!=0){
			switch(cod){
				case 1:{
					cont1++;
					break;
				}
				case 2:{
					cont2++;
					break;
				}
				case 3:{
					cont3++;
					break;
				}
				case 4:{
					cont4++;
					break;
				}
				case 5:{
					cont5++;
					break;
				}
				case 6:{
					cont6++;
					break;
				}
			}
		total++;
		}
	}
	
	printf("Candidato 1: %d\n", cont1);
	printf("Candidato 2: %d\n", cont2);
	printf("Candidato 3: %d\n", cont3);
	printf("Candidato 4: %d\n", cont4);
	printf("Nulo: %d - %d%%\n", cont5, cont5* 100 /total);
	printf("Branco: %d - %d%%\n", cont6, cont6* 100 /total);
}

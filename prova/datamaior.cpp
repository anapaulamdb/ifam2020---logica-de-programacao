#include <stdio.h>
int main(){
	int ddia1, dmes1, dano1, ddia2, dmes2, dano2;
	printf("Primeira data: ");
	scanf("%d %d %d", &ddia1, &dmes1, &dano1);
	printf("Segunda data: ");
	scanf("%d %d %d", &ddia2, &dmes2, &dano2);
	
	if(dano1 == dano2){
		if(dmes1 == dmes2){
			if(ddia1 > ddia2){
				printf("Primeira data eh maior");
			} else {
				printf("Segunda data eh maior");
			}
		} else if(dmes1 > dmes2){
			printf("Primeira data eh maior");
		} else {
			printf("Segunda data eh maior");
		}
	} else if(dano1 > dano2){
		printf("Primeira data eh maior");
	} else {
		printf("Segunda data eh maior");
	}
}

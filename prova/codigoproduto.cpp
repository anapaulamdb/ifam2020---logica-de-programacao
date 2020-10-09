#include <stdio.h>
int main(){

int cod;
	
		scanf("%d", &cod);
		
		
		switch(cod){
			case 1:{
				printf("Sul");
				break;
			}
			case 2:{
				printf("Norte");
				break;
			}
			case 3:{
				printf("Leste");
				break;
			}
			case 4: {
				printf("Oeste");
				break;
			}
			case 5: case 6:{
				printf("Nordeste");
				break;
			}
			case 7: case 8: case 9:{
				printf("Sudeste");
				break;
			}
			case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:{
			    printf("Centro-oeste");
			    break;
			}
			case 25: case 26: case 27: case 28: case 29: case 30:{
			    printf("Nordeste");
			    break; 
			}
			default:{
				printf("Codigo invalido!");
				break;
			}	
			
	}
}

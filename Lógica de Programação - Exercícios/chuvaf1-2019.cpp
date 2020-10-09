#include<stdio.h>
#include<stdlib.h>

main(){
	int n,m;
	int i, j;
	
	scanf("%d %d", &n, &m);
	char c[n][m];
	
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			scanf(" %c", &c[i][j]);
		}
	}
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			if(c[i][j]== '.'){	
			//  verifica o elemento de cima   		
				if(c[i-1][j] == 'o'){
					c[i][j] = 'o'; // verifica se diagonal superior direita 
				} else if(c[i-1][j+1] == 'o' && c[i+1][j+1] == '#'){
					c[i][j] = 'o';	
	//  verifica o elemento anterior e o diagonal inferior esquerda
				} else if( c[i][j-1] == 'o' && c[i+1][j-1] == '#'){
					c[i][j] = 'o';	
	//  elemento posterior e diagonal inferior direita
				} else if (c[i][j+1] == 'o' && c[i+1][j+1] == '#'){
					c[i][j] = 'o';			
				}
			}
		}
	}
	for (i=0; i<n; i++){
		for (j=m-1; j>=0; j--){
			if(c[i][j]== '.'){			
	//  verifica o elemento de cima      
				if(c[i-1][j] == 'o'){
					c[i][j] = 'o';	
				} else if(c[i-1][j-1] == 'o' && c[i+1][j-1] == '#'){
					c[i][j] = 'o';
	//verifica o elemento anterior e o diagonal inferior esquerda	
				} else if (c[i][j-1] == 'o' && c[i+1][j-1] == '#'){
					c[i][j] = 'o';	
	//  elemento posterior e diagonal inferior direita
				} else if (c[i][j+1] == 'o' && c[i+1][j+1] == '#'){
					c[i][j] = 'o';			
				}
			}
		}
	}
	
	printf("\n");
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			printf("%c", c[i][j]);
		}
		printf("\n");
	}
}
	


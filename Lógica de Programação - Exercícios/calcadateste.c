#include<stdio.h>
#include<stdlib.h>

main(){
int n;
scanf("%d", n);
int lista[n];
for(int i=1; i<=n; i++){
    scanf("%d", lista[i]);
}
int ans=0;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        int a = lista[i], b = lista[j];
        int ultimo = -1;
        int res = 0;

        for(int k = 1; k <= n; k++){
            if((lista[k] != a && lista[k] != b) || lista[i] == ultimo){
                continue;
                res++;
                ultimo = lista[k];
            }
            ans = res;
        }
    }
    printf("%d", ans);
}	
	
	
}

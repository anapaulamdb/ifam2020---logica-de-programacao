#include<stdio.h>

int main()
{
    int numero, a, b, c, d=0;
    
        scanf("%d", &numero);
        c=numero/2; d=0;
        for(b=1; b<=c; b++)
        {
            if(numero%b==0)
                d+=b;
        }
        if(d==numero)
            printf("eh perfeito\n");
        else
            printf("nao eh perfeito\n");
   
}

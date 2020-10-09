#include<stdio.h>
#include<conio.h>
 main ()      
        {
        int a,b,c,maior,menor;
        printf("Digite o primeiro numero: ");
        scanf("%d", & a);
        printf("Digite o segundo numero: ");
        scanf("%d", & b);
        printf("Digite o terceiro numero: ");
        scanf("%d", & c);
        maior = a;
        menor = a;
        if (b < menor)
               menor = b;
        if (c < menor)
               menor = c;
        if (b > maior)
               maior = b;
        if (c > maior)
               maior = c;
       printf ("\n O maior numero : %d", maior);
       printf ("\n O maior numero : %d", menor);
	   getch();
}


#include<stdio.h>
#include<stdlib.h>
main()
{
	int x;
	scanf("%d",&x);
	for(long int i=1;i<x+1;i++)
	{
		printf("%ld %ld %ld\n%ld %ld %ld\n",i,i*i,i*i*i,i,i*i+1,i*i*i+1);
	}
	
	return 0;
}

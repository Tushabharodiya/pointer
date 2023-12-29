#include<stdio.h>
main()
{
	int a;
	int *p,i,square;
	p=&a;
	printf("Enter Value Of Number = ");
	scanf("%d",&a);
	
	square=*p * *p;
	
	printf("Squre Of Number = %d",square);

}
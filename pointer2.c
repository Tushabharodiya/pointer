#include<stdio.h>
void main()
{
	
	int a,b;
	int *p1,*p2;
	
	p1=&a;
	p2=&b;
	 
	printf("Enter Value A = ");
	scanf("%d",&a);
	printf("Enter Value B = ");
	scanf("%d",&b);
	 
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("\nSwapping Value A And B :\n");
	printf("Vlaue Of A = %d\n",*p1);
	printf("value Of B = %d\n",*p2);
}
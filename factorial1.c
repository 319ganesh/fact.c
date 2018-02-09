#include<stdio.h>
int fact=1;
main()
{
	int n,i;
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n the factorial is:%d",fact);
	return 0;
}

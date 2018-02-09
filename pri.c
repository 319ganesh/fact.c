#include<stdio.h>
main()
{
	int n,i,a;
	printf("\n enter the value of a");
	scanf("%d",&a);
	printf("\n enter the value of n");
	scanf("%d",&n);
	for(i=a;i<n;i++)
	{
		if((i%2==0)||(i%3==0))
		{
			printf("\n");
		}
		else if(i/2==0)
		{
			printf("\n");
		}
		else
		{
			printf("\n %d",i);
		}
	}
	return 0;

#include<stdio.h>
#include<math.h>
main()
{
	int n,i,v,multiple;
	printf("\n enter the value of n");
	scanf("%d",&n);
	printf("\n enter the value of v");
	scanf("%d",&v);
	for(i=1;i<=v;i++)
	{
		multiple=n*i;
		printf("\n the value is:%d",multiple);
	}
	return 0;
}

#include<stdio.h>
main()
{
int a,rem,i,result=0;
printf("\n enter the value of a:");
scanf("%d",&a);
i=a;
while(i!=0)
{
rem=a%10;
result=result+rem*rem*rem;
i=i/10;
}
if(result==a)
{
printf("\n the amstrong number is:%d",a);
}
else
{
printf("\n the number is not an amstrong number:%d",a);
}
return 0;
}

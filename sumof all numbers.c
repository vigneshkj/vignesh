#include<stdio.h>
#include<conio.h>
int main(void)
{
int n,a,sum=0,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
sum=sum+a;
}
printf("%d",sum);
return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
int n,sum=0,a;
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
printf("%d",sum);
return 0;
}

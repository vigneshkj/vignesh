#include <stdio.h>
#include<conio.h>
int main(void)
{
int n;
scanf("%d",&n);
int p=1;
while(p>n)
{
p>>=1;
}
printf("%d",p);
return 0;
}

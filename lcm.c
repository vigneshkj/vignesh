#include <stdio.h>
#include<conio.h>
int main(void)
{
int n1,n2,lcm;
scanf("%d %d",&n1,&n2);
lcm=(n1>n2)?n1:n2;
while(1)
{
if(lcm%n1==0 && lcm%n2==0)
{
printf("\nlcm=%d",lcm);
break;
}
++lcm;
}
return 0;
}

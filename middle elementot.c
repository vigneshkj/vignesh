#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char a[10];
int m;
scanf("%s",a);
m=strlen(a);
if(m%2==0)
{
a[m/2]='*';
a[(m/2)-1]='*';
}
else
{
a[m/2]='*';
}
printf("%s",a);
return 0;
}

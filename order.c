#include <stdio.h>
#include<conio.h>
int main(void)
{
char a[10];
int n,i;
scanf("%s",a);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
}
return 0;
}

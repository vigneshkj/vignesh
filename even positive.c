#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char a[10];
int i,n;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
printf("\t");
for(i=0;i<n;i++)
{
if(i%2!=0)
{
printf("%c",a[i]);
}
}

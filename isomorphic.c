#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char a[100],b[100];
scanf("%s %s",a,b);
int m,n,i,j,u,v,w,x,y,z,flag=0;
m=strlen(a);
n=strlen(b);
if(m==n)
{
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
u=a[i];
v=a[j];
w=b[i];
x=b[j];
y=u-v;
z=w-x;
if(y==z)
{
flag=1;
}
else
{
flag=0;
break;
}
}
}
}
else
{
printf("no");
}
if(flag==1)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}

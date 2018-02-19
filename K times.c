#include<stdio.h>
#include<conio.h>
void main()
{
char ch[50];
int n,i;
printf("ENTER THE INPUT STRING:\n");
scanf("%s",ch);
printf("\nENTER THE NO.OF.TIMES TO PRINT:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",ch);
}
}
	

#include<string.h>
#include<conio.h> 
int main()
{
char a[100], b[100];
printf("Enter a string\n");
gets(a);
printf("Enter a string\n");
gets(b);
if (strcmp(a,b) == 0)
printf("Entered strings are equal.\n");
else
printf("Entered strings are not equal.\n");
return 0;
}

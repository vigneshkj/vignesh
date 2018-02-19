include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
isPowerOfTwo(8)?printf("Yes\n"):printf("No\n");
isPowerOfTwo(34)?printf("Yes"):printf("No");
getch();
}
bool isPowerOfTwo(int n)
{
return n&&(!(n&(n-1)));
}

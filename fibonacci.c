#include<stdio.h>
#include<conio.h>
int fibo(int);
int main()
{
int num;
int result;
printf("Enter the nth number in fibonacci series");
scanf("%d", &num);
if (num < 0)
{
printf("Fibonacci of negative number is not possible.\n");
}
else
{
result = fibo(num);
printf("The %d number in fibonacci series is %d\n", num, result);
}
return 0;
}

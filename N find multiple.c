#include<stdio.h>
#include<conio.h>
{
int sumOfDigits(int x)
{
int sum = 0;
while (x != 0)
{
sum += x %10;
x= x /10;
}
return sum;
}
int main()
{
int n = 328;
cout << "Sum of digits in numbers from 1 to " << n << " is "
<< sumOfDigitsFrom1ToN(n);
return 0;
}

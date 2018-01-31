#include<stdio.h>
#include<conio.h>
int main()
{
int lowerLimit, upperLimit;
printf("Enter lower limit: ");
scanf("%d", &lowerLimit);
printf("Enter upper limit: ");
scanf("%d", &upperLimit);
printf("Even/odd Numbers from %d to %d are: ", lowerLimit, upperLimit);
printEvenOdd(lowerLimit, upperLimit); 
return 0;
}

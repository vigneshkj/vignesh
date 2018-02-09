#include <stdio.h>
#include<conio.h>
{
int seconds;
int minutes;
int hours;
}
void Difference(struct TIME t1, struct TIME t2, struct TIME *diff);
int main()
{
printf("Enter start time: \n");
printf("Enter hours, minutes and seconds respectively: ");
scanf("%d%d%d",&t1.hours,&t1.minutes,&t1.seconds);
printf("Enter stop time: \n");
printf("Enter hours, minutes and seconds respectively: ");
scanf("%d%d%d",&t2.hours,&t2.minutes,&t2.seconds);
printf("\nTIME DIFFERENCE: %d:%d:%d - ",t1.hours,t1.minutes,t1.seconds);
printf("%d:%d:%d ",t2.hours,t2.minutes,t2.seconds);
printf("= %d:%d:%d\n",diff.hours,diff.minutes,diff.seconds);
return 0;
}

//print the number is leap year or not
// if the year is divisible by 4 then it is a leap year
#include<stdio.h>
main()
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if (x%4==0)
	printf("this a leap year",x);
	else
	printf("this is not a leap year",x);
}

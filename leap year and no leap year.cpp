//print the number is leap year or not
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

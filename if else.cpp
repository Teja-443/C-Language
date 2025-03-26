//print the number is -ve or +ve or zero
#include<stdio.h>
main()
{
	int x;
	printf("enter the  number");
	scanf("%d",&x);
	if(x>2)
	printf("%d is positive",x);
	{
		if(x<2)
		printf("%d is negative",x);
		else
		printf("%d is zero",x);
	}
}

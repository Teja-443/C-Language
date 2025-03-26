//conditional operator
#include<stdio.h>
main()
{
	int a=50,b=30,c=40,d;
	d = a>b ?(a<c ? b:c  ): (b>c ? b : c);
	printf(" if the condition is satisfied d = %d", d);
}

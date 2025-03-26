//print connsonents
#include<stdio.h>
main()
{
	char  x;
	printf("enter the vowels \n");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	printf("%c is a vowel",x);
	else
	printf("%c is consonent",x);
}

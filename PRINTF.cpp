//comment 
//single line comment
/* multi line comment*/ 
//------------------------------------------------
//ASCII "A" ------->FROM 65
//ASCII "a" ----------> 95
//------------------------------------------------
//printf to display on the screen
//printf("hello world");
//------------------------------------------------
/*#include<stdio.h>
main()
{
	printf("hello world");
}*/
//------------------------------------------------
//FORMAAT SPECIFIERS
//%d - signed integer , %c - char, %f - float, %o - octal, %x - hex decicmal , %s - string, %u - unsigned 
//-----------------------------------------------
//prinf output functitons

/*#include<stdio.h>
main()
{
	int a = 40;
	printf("%d",a);	
}*/
//..............................................
/*#include<stdio.h>
main()
{
	int x;
	printf("%d",x);
}*/
//----------------------------------------------
//write a float value based on format specifier

/*#include<stdio.h>
main()
{
	float x=45.444444;
	printf("%f",x);
}*/
//----------------------------------------------
//scanf ("format specicfier ", &var1, &var2)
//#include<stdio.h>
/*main()
{
	int a,b;
	printf("enter the integer /n ");
	scanf("%d%d", &a,&b);
}*/
//-----------------------------------
//Read integer and float

#include<stdio.h>
main()
{	
	int a;
	float b;
	printf("enter the integer & float");
	scanf("%d%f",&a,&b);
}
//--------------------------------------





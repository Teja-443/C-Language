/*print the student grade, if marks > 500 is grade 'A',
if the marks are between 400 to 550 'B' grade,
300 to 400 'c',
300 is 'F'*/
#include<stdio.h>
main()
{
	int x;
	printf("enter the number ");
	scanf("%d",&x);
	if (x>=500)
	printf("the grade is 'A'");
	{
		if( x>=400 && x<500)
		printf("the grade is 'b'");
		{
			if (x>=300 && x<400)
			printf("the grade is c");
			{
				if (x<300)
				printf("the student is fail");
			}
			
		}
	}
}

/*#include<stdio.h>
int main() {
    int x;
    printf("Enter the marks: ");
    scanf("%d", &x);

    if (x > 500) {
        printf("The grade is 'A'\n");
    } else if (x >= 400 && x <= 500) {
        printf("The grade is 'B'\n");
    } else if (x >= 300 && x < 400) {
        printf("The grade is 'C'\n");
    } else {
        printf("The student is fail\n");
    }

    return 0;
}*/

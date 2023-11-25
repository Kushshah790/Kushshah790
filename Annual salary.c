#include<stdio.h>
main()
{
	int salary,annual;
	printf("Enter your monthly salary:");
	scanf("%d", &salary);
	annual=salary*12;
	printf("The annual salary is %d",annual);
}
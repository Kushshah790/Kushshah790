#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("It is in uppercase");
	}
	else if(ch>='a' && ch<= 'z')
	{
		printf("It is in lowercase");
	}
	else
	{
		printf("It is a number or special digit");
	}
}
#include<stdio.h>
main()
{
	FILE *file1;
	char data[20];
	
	printf("Enter data:");
	scanf("%s",data);
	file1=fopen("tops.txt","a");
	fscanf(file1,"%s",data);
	
	fclose(file1);	
	
	file1=fopen("tops.txt","r");
	fprintf(file1,"%s",&data);
	printf("%s",&data);
}
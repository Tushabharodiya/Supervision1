#include<stdio.h>
void main()
{
	char *p;
	char data[1000];
	p=fopen("fileheading.txt","w");
	
	if(p==0)
	{
		printf("file is not open ");
	}
	else
	{
		printf("Enter your string = ");
		gets(data);
		fputs(data,p);
		printf("data add sucessfully...");
	}
	fclose(p);
}
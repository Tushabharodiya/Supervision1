#include<stdio.h>
void main()
{
	char data[1000];
	int *p;
	p = fopen("append.txt","a");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter your string = ");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add sucessfully...");
	}
	fclose(p);

	printf("\n----------data read--------------");

	p=fopen("append.txt","r");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s",data);	
		}
	}
	fclose(p);
}
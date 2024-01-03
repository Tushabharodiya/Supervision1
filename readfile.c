#include<stdio.h>
void main()
{
	char data[100];
	char *p;
	p=fopen("readfile.txt","r");
	
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
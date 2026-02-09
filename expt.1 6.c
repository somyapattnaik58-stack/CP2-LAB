#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],i;
	printf("Enter a string");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		a[i]='-';
	}
		printf("%s",a);
}

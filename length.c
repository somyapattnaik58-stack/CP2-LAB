#include<stdio.h>
main()
{
	char name[50]="Hello world";
int i=0;
while(name[i]!='\0')
{
	i++;
}	
printf("The length of the string is %d\n",i);
}

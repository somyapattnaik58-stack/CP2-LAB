#include<stdio.h>
#include<string.h>
void upper(char s[])
{
	strupr(s);
}
main()
{
	char str[]="somya pattnaik";
	printf("Before:%s\n",str);
	printf("After:\n");
	upper(str);
	printf("%s\n",str);
}
	


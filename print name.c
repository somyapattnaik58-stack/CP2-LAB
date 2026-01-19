#include<stdio.h>
int main()
{
	char name[25];
	char sicno[10];
	printf("Enter your name");
	gets(name);
	printf("Enter your SIC No.");
	scanf("%s",sicno);
	printf("name=%s\n sic no=%s", name,sicno);
}

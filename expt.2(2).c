#include<stdio.h>
#include<string.h>
 int main()
{
	char str1[20],str2[20];
	int result;
	printf("Enter a string");
	scanf("%s",str1);
	printf("Enter another string");
    scanf("%s",str2);
	strcmp(str1,str2);
	if(result==0)
	printf("Both are equal");
	else
	printf("Both are not equal");
}

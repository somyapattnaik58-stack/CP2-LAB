#include<stdio.h>
int main()
{
	int arr[5],*p;
	printf("Enter 5 elements\n");
	for(p=arr;p<arr+5;p++)
	scanf("%d",p);
	printf("Array elements:\n");
	for(p=arr;p<arr+5;p++)
	printf("%d\n",*p);
	return 0;
}

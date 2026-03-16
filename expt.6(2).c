#include<stdio.h>
int main()
{
	int arr[5],*p,max;
	printf("Enter 5 elements:\n");
	for(p=arr;p<arr+5;p++)
	scanf("%d",p)
	max=*arr;
	for(p=arr;p<arr+5;p++)
	{
	if(*p>max)
	max=*p;
	printf("Largest elements %d",max);
}
}

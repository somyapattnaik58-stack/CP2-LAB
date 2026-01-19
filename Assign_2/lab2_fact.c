#include<stdio.h>
	int fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
 }              
             void main()
{
	int f=fact(5);
	printf("The factorial of the no. is %d",f);
}


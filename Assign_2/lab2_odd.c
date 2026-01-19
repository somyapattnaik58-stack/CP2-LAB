#include<stdio.h>
void print_no(int x, int y)
{
	if(x>y)
	{
		printf("end");
	}
	else
	{
		if(x%2)
			printf("%d",x);
		print_no(x+1,y);
	}
}
void main()
{
	print_no(10,20);
}


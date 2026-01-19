:wq#include<stdio.h>
int power(int x, int y)
{
	if(y==0)
		return 1;
	else
		return x*power(x,y-1);
}
                void main()
{
	int p =power(8,7);
	printf("The power of the number %d",p);
}

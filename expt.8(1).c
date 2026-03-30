#include<stdio.h>
struct complex
{
	int r,i;
};
void incrcomplex(struct complex*c)
{
	c->r=c->r+1;
	c->i=c->i+1;
}
int main()
{
struct complex c;
printf("Enter real and imaginary part:");
scanf("%d %d",&c.r,&c.i);
incrcomplex(&c)
Printf("After increment:%d+%di\n",c.r,c.i);
}

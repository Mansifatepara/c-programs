// swap two numbers
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	c=a,a=b,b=c;
	printf("print is:%d,%d",a,b);
	
}

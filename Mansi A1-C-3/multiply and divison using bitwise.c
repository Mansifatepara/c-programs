// multiply and devide by 2 without using multiplication/devision operator
#include<stdio.h>
void main()
{
	int n;
	float mul,div;
	printf("enter the value of a : \n");
	scanf("%d",&n);
	mul=n<<1;
	printf("multiplication is : %f", mul);
	div=n>>1;
	printf("\n divison is : %f", div);
}

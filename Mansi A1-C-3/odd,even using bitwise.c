// given number is odd or even using bitwise operrator
#include<stdio.h>
void main()
{
	int n;
	printf("enter n : \n");
	scanf("%d",&n);
	if(n&1==1)
	{
		printf("entered number is odd");
	}
	else
	{
	printf(" entered number is even");
 }
 } 

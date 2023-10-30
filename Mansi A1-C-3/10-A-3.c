//find whether the given number is prime or not
#include<stdio.h>
void main()
{
	int i=2,n,count=0;
	printf("enter the value of n : \n");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		count++;
	}
		i++;
	}
	if(count==0)
	{
		printf("Given number is prime number");
	}
	else
	{
		printf("Given number is not prime number");
	}
}

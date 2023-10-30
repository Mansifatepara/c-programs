//10-B-2
#include<stdio.h>
void main()
{
	int i=2,n,flag=0;
	printf("enter the value of n : \n");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		flag=1;
	}
		i++;
	}
	if(flag==1)
	{
		printf("Given number is not prime number");
	}
	else
	{
		printf("Given number is prime number");
	}
}

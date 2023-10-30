//10-B-3
#include<stdio.h>
void main()
{
	int n,temp,num;
	printf("enter n : \n");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		temp=(temp*10)+(n%10);
		n=n/10;
	}
	if(temp==num)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}

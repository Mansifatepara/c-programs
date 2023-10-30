//find factors of the given number
#include<stdio.h>
void main()
{
	int n,i=1,count=0;
	printf("enter n : \n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count=0;
		}
		else
		{
			count++;
		}
		i++;
	}
	printf("%d",i);
}

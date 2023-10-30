//print multiplication table of a given number
#include<stdio.h>
void main()
{
	int n,i=1;
	printf("enter n : \n");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("\n%d=%d*%d",n*i,n,i);
		i++;
	}
}

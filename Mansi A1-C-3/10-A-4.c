//10-A-4
#include<stdio.h>
void main()
{
	int n,temp;
	printf("enter n : \n");
	scanf("%d",&n);
	while(n>0)
	{
		temp=n%10;
		printf("\n%d",temp);
		n=n/10;
		}
}

//10-A-5
#include<stdio.h>
void main()
{
	int n,temp;
	printf("enter n : \n");
	scanf("%d",&n);
	while(n>0)
	{
		temp=(temp*10)+(n%10);
		n=n/10;
		}
		printf("%d",temp);
}

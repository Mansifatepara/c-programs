//12-B-1
#include<stdio.h>
void main()
{
	int i,j,n,sum;
	printf("Enter n : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			sum+=j;
		}
	}
	printf("%d",sum);
}

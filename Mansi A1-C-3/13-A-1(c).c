//13-A-1(c)
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=5-i+1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
            if(j!=1)
            {
            	printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}

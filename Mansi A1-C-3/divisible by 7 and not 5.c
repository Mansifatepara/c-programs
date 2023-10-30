//print all integer greater than 100 and less than 200 that are divisible by 7 and not divisible by 5. 
#include<stdio.h>
void main()
{
	int i=101;
	while(i<=199)
	{
		if(i%7==0&&i%5!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}

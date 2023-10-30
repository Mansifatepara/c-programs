// print simple interest with scanf
#include<stdio.h>
void main()
{
	int p,r,t;
	float SI;
	printf("enter p\n");
	scanf("%d",&p);
	printf("enter r\n");
	scanf("%d",&r);
	printf("enter t\n");
	scanf("%d",&t);
	SI = (p*r*t)/100;
	
	printf("SI is : %f", SI);
}

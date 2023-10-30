// determine the roots of the equation ax^2+bx+c=0
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float ans,ANS;
	printf("enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(b*b>=4*a*c)
	{
		ANS=(-b+sqrt(b*b-4*a*c))/2*a;
		ans=(-b-sqrt(b*b-4*a*c))/2*a;
		printf("root is %f %f",ANS,ans);
	}
	else
	{
		printf("root does not exists");
	}
 } 
 

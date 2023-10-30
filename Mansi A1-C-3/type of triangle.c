//check whether the triangle is isosceles,equilater,scalene or right angled triangle
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b||b==c||c==a)
	{
		
	
	if(a==b&&b==c&&c==a)
	{
		printf("triangle is equilateral");
	}
	else
	{
		printf("triangle is isosceles");
	}
	
}
	else if(a!=b&&b!=c&&c!=a)
	{
		printf("triangle is scalene");
	}
	else if(a*a+b*b==c*c||b*b+c*c==a*a||c*c+a*a==b*b)
	{
		pritnf("trialgle is right angled triangle");
	}
}

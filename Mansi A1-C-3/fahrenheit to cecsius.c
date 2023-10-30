// print tem. from fahrenheit to celsius
#include<stdio.h>
void main()
{
	float f,c;
	printf("enter f\n");
	scanf("%f", &f);
	c = (((f-32)*5)/9);
	printf("c is : %f", c);
 } 

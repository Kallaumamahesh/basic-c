// to find the area and perimeter of a rectangle when side values in given.
#include<stdio.h>
void main()
{
	int l, b, a, p;
	printf("Enter length and width values");
	scanf("%d%d", &l, &b);
	a = l*b;
	p = 2*(l+b);
	printf("Area of the rectangle is %d\n", a);
	printf("Perimeter of the rectangle is %d", p);
	
}

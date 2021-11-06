// printing all arithmetic operations
#include<stdio.h>
void main()
{
   int a, b, A, S, M, D, MD;
   a = 10;
   b = 25;
   
   A = a + b;
   S = a - b;
   M = a * b;
   D=a/b;
   MD=a%b;
   
   printf(" sum of %d and %d is %d\n", a, b, A);
   printf(" difference of %d and %d is %d\n", a, b, S);
   printf("multiplication of %d and %d is %d\n", a, b, M);
   printf("division of %d and %d is %d\n", a, b, D);
   printf("remainder of %d & %d is %d", a, b, MD);	
}

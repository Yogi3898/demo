#include<stdio.h>

int main()
{
   int a, b, product;

   printf("Enter two numbers to multiply\n");
   scanf("%d%d", &a, &b);

   product = a * b;

   printf("Product of the numbers = %d\n", product);

   return 0;
}

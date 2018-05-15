#include<stdio.h>

int main()
{
   float a, b, ratio;

   printf("Enter two numbers to add\n");
   scanf("%f%f", &a, &b);

   ratio = a / b;

   printf("Ratio of the numbers(a/b) = %f\n", ratio);

   return 0;
}


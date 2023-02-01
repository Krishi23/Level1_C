#include<stdio.h>
int main() 
{
    float a,b,sum;
    printf("*********Addition of two numbers***********\n");
    printf("Enter the first number for addition : ");
    scanf("%f",&a);
    printf("Enter the Second number for addition : ");
    scanf("%f",&b);
    sum = a+b;
    printf("The Sum of %f & %f is : %f",a,b,sum);
    return 0;
}

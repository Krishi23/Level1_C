#include<stdio.h>
 
float input();
float addition(float x, float y); 
void output(float sum, float x, float y);

int main()
{   float a,b,sum;
    printf("******  ADDITION OF TWO NUMBERS  ******\n");
    a = input();
    b = input();
    sum = addition(a,b);
    output(sum,a,b);
    return 0;
}

float input()
{   float x;
    printf("Enter the number : ");
    scanf("%f",&x);
    return x;
}

float addition(float x, float y)
{
    float sum;
    sum = x+y;
    return sum;
}

void output(float sum, float a, float b)
{
    printf("The Sum of %.2f and %.2f is : %.2f",a,b,sum);
}


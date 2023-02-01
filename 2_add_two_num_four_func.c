#include<stdio.h>
 
int first_num();
int second_num();
void addition(float x, float y); 

int main()
{
    float a,b;
    printf("-----Addition of Two Numbers-----\n");
    a=first_num();
    b=second_num();
    addition(a,b);
    return 0;
}

int first_num()
{   float x;
    printf("Enter the first number : ");
    scanf("%f",&x);
    return x;
}

int second_num()
{
    float y;
    printf("Enter the second number : ");
    scanf("%f",&y);
    return y;
}

void addition(float x, float y)
{
    float sum;
    sum = x+y;
    printf("The sum of %.2f & %.2f is %.2f",x,y,sum);
}

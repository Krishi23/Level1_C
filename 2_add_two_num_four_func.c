#include<stdio.h>
 
float input(int x);
float addition(float num1, float num2); 
void output(float sum, float num1, float num2);

int main()
{   float first_num,second_num,sum;
    int a,b;
    a=1;
    b=2;
    first_num = input(a);
    second_num = input(b);
    sum = addition(first_num,second_num);
    output(sum,first_num,second_num);
    return 0;
}

float input(int x)
{   float num;
    if(x==1)
    {
        printf("Enter the first number for addition : ");
        scanf("%f",&num);
    }
    else if(x==2)
    {
        printf("Enter the second number for addition : ");
        scanf("%f",&num);
    }
    return num;
}

float addition(float num1, float num2)
{
    float sum;
    sum = num1+num2;
    return sum;
}

void output(float sum, float num1, float num2)
{
    printf("The Sum of %.2f and %.2f is : %.2f",num1,num2,sum );
}

//    A FUNCTION CAN EXECUTE ONE NAMEABLE TASK FOR n NUMBER OF TIMES AND CAN BE CALLED AGAIN AND AGAIN   //

#include<stdio.h>
 
float input();
float addition(float num1, float num2); 
void output(float sum, float num1, float num2);

int main()
{   float first_num,second_num,sum;
    printf("******  ADDITION OF TWO NUMBERS  ******\n");
    first_num = input();
    second_num = input();
    sum = addition(first_num,second_num);
    output(sum,first_num,second_num);
    return 0;
}

float input()
{   float num;
    printf("Enter the number : ");
    scanf("%f",&num);
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


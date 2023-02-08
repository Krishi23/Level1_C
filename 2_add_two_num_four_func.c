#include<stdio.h>
 
float input_num(char num_order[]);
float addition(float num1, float num2); 
void output(float sum, float num1, float num2);

int main()
{   float first_num,second_num,sum;
    first_num = input_num("1st");
    second_num = input_num("2nd");
    sum = addition(first_num,second_num);
    output(sum,first_num,second_num);
    return 0;
}

float input(char c[])
{  
    float num;
    printf("Enter the %s number for addition : ",c);
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
    printf("The Sum of %.2f and %.2f is : %.2f",num1,num2,sum);
}

//    A FUNCTION CAN EXECUTE ONE NAMEABLE TASK FOR n NUMBER OF TIMES BY CALLING IT n TIMES   //

//    THIS TASK WAS ABOUT HOW CAN U CALL A FUNCTION AGAIN TO DO THE SAME TASK AND NOT TO DECLARE ANOTHER ONE     //

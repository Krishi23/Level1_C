#include<stdio.h>
 
float input_ith_num(int ith_num, char ordinal_suffix[]);
float addition(float num1, float num2); 
void output_sum(float sum, float num1, float num2);

int main()
{   float first_num,second_num,sum;
    first_num = input_ith_num(1,"st");
    second_num = input_ith_num(2,"nd");
    sum = addition(first_num,second_num);
    output(sum,first_num,second_num);
    return 0;
}

float input_ith_num(int ith_num, char ordinal_suffix[])
{  
    float num;
    printf("Enter the %d%s number for addition : ",ith_num,ordinal_suffix);
    scanf("%f",&num);
    return num;
}

float addition(float num1, float num2)
{
    float sum;
    sum = num1+num2;
    return sum;
}

void output_sum(float sum, float num1, float num2)
{
    printf("The Sum of %.2f and %.2f is : %.2f",num1,num2,sum);
}

//    A FUNCTION CAN EXECUTE ONE NAMEABLE TASK FOR n NUMBER OF TIMES BY CALLING IT n TIMES   //

//    THIS TASK WAS ABOUT HOW CAN U CALL A FUNCTION AGAIN TO DO THE SAME TASK AND NOT TO DECLARE ANOTHER ONE     //

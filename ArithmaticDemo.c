/******************************************************
 * File         :   ArithmaticDemo.c
 * Description  :   C Program to demonstrate arithmatic operations 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   11/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number1 = 10, number2=5;
    printf("Number 1:%d\tNumber2:%d\n",number1,number2);
    printf("Addition:%d\n",number1+number2);
    printf("Subtraction:%d\n",number1-number2);
    printf("Multiplication:%d\n",number1*number2);
    printf("Division:%d\n",number1/number2);
    printf("Reminder:%d\n",number1%number2);
    return 0;
}
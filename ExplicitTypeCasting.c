/******************************************************
 * File         :   TypeCastingDemo.c
 * Description  :   C Program to demonstrate explicit type casting 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   31/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number1 = 25, number2 = 13;
    float result;
    result = number1/number2;

    // display only 2 digits after decimal point
    printf("(Without typecasting) 25/13 = %.2f\n", result );  

    result = (float)number1/number2;

    // display only 2 digits after decimal point
    printf("(With typecasting) 25/13 = %.2f\n", result ); 

    // signal to operating system everything works fine
    return 0;
}
/******************************************************
 * File         :   ArithmaticDemo.c
 * Description  :   C Program to demonstrate Relational Operators 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   11/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number1 =5, number2=5,number3 =10;
    /*TRUE is represented as 1 FALSE as 0 */
    printf("1: TRUE\t 0:FALSE\n");
    printf("%d == %d is %d \n", number1, number2, number1 == number2);
    printf("%d == %d is %d \n", number1, number3, number1 == number3);
    printf("%d > %d is %d \n", number1, number2, number1> number2);
    printf("%d > %d is %d \n", number1, number3, number1 > number3);
    printf("%d < %d is %d \n", number1, number2, number1 < number2);
    printf("%d < %d is %d \n", number1, number3, number1 < number3);
    printf("%d != %d is %d \n", number1, number2, number1 != number2);
    printf("%d != %d is %d \n", number1, number3, number1 != number3);
    printf("%d >= %d is %d \n", number1, number2, number1 >= number2);
    printf("%d >= %d is %d \n", number1, number3, number1 >= number3);
    printf("%d <= %d is %d \n", number1, number2, number1 <= number2);
    printf("%d <= %d is %d \n", number1, number3, number1 <= number3);
    return 0;
}
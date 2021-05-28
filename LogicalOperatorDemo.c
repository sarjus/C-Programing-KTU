/******************************************************
 * File         :   ArithmaticDemo.c
 * Description  :   C Program to demonstrate Logical Operators 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   12/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int num1 = 10, num2 = 4, num3 = 10, num4 = 20;
  
    // Logical AND: Returns TRUE if all conditions are TRUE otherwise returns FALSE
    if (num1 > num2 && num3 == num4)
        printf("Number 1 is greater than Number 2 AND Number 3 is equal to Number 4\n");
    else
        printf("AND condition not satisfied\n");
  
    // Logical OR - Returns FALSE if all conditions are FALSE otherwise returns TRUE
    if (num1 > num2 || num3 == num4)
        printf("Number 1 is greater than Number 2 OR Number 3 is equal to Number 4\n");
    else
        printf("Neither Number 1 is greater than Number 2 nor Number 3 is equal "
               " to Number 4\n");
  
    // Logical NOT - Returns TRUE if condition is FLASE and returns FALSE if it is TRUE
    if (!num1)
        printf("Number 1 is zero\n");
    else
        printf("Number 1 is not zero");
}
/******************************************************
 * File         :   TypeCastingDemo.c
 * Description  :   C Program to demonstrate type casting 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   28/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int iNumber = 100;
    double dNumber = 12.5;
    int  number = 1;
    char character = 'k'; /*ASCII value is 107 */
    int sum;
    //the variable "iNumber" will be converted to double and 
    //the result of the overall operation will be a double
    printf("%lf",iNumber + dNumber);

    //char is converted into int
    sum = number + character;
    printf("\nValue of sum : %d\n", sum );
    return 0;
}
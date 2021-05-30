/******************************************************
 * File         :   MaxTwoNosConditional.c
 * Description  :   C program to find the maximum in the given two numbers 
 *                  using the conditional operator 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   30/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int firstNumber,secondNumber,maximum;
    printf("\nC Program to find the maximum in the given two numbers");
    printf("\nEnter the two integer numbers:");
    scanf("%d%d",&firstNumber,&secondNumber);
    maximum = firstNumber>secondNumber?firstNumber:secondNumber;
    printf("\nMaximum of %d and %d = %d",firstNumber,secondNumber,maximum);
    return 0;
}
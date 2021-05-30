/******************************************************
 * File         :   LargestAmongThreeConditional.c
 * Description  :   Find  largest among three numbers 
 *                  using the conditional operator
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   30/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int firstNumber, secondNumber, thridNumber,largest;
    printf("\nEnter the three integer numbers:");
    scanf("%d%d%d",&firstNumber,&secondNumber,&thridNumber);
    largest = (firstNumber>secondNumber && firstNumber >thridNumber )?firstNumber:
    (secondNumber>firstNumber && secondNumber >thridNumber)?secondNumber:thridNumber;
    printf("Largest Number=%d",largest);
    return 0;
}
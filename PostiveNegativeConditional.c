/******************************************************
 * File         :   PostiveNegativeConditional.c
 * Description  :   Find number is positive or negative using the conditional operator 
 *                  using the conditional operator 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   30/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number;
    printf("\nEnter a Number:");
    scanf("%d",&number);
    number>0?printf("Positive"):printf("Negative");
    return 0;
}
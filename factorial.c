/******************************************************
 * File         :   factorial.c
 * Description  :   C Program to find factorial of a given number 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   16/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number,i,factorial=1;
    printf("\nEnter the number:");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        factorial = factorial * i;
    }
    printf("\nThe factorial of %d is %d",number,factorial);

    return 0;
}
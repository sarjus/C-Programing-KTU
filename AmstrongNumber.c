/******************************************************
 * File         :   ReverseNumber.c
 * Description  :   C Program to check a number is Amstrong or not
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   14/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number,amstrong=0, remainder,originalNumber;;
    printf("Enter a 3 digit number to check whether it is Amstrong or not:");
    scanf("%d",&number);
    originalNumber = number;
    while(number>0){
        remainder = number % 10;
        amstrong = amstrong + remainder*remainder*remainder;
        number = number/10;
    }
    if(originalNumber==amstrong){
        printf("The given number %d is an Amstrong Number",originalNumber);
    }
    else{
        printf("The given number %d is not an Amstrong Number",originalNumber);
    }
    return 0;
}
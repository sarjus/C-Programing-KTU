/******************************************************
 * File         :   ReverseNumber.c
 * Description  :   C Program to check a number is palindrome or not
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   14/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number,originalNumber,reverse=0,remainder;
    printf("Enter the integer number:");
    scanf("%d",&number);
    //for checking the number is palindrome
    originalNumber = number;
    while(number>0){
        remainder = number % 10;
        //reversing the number
        reverse = reverse *10 + remainder;
        number = number/10;
    }
    if(originalNumber==reverse){
        printf("The given number %d is a palindrome number",originalNumber);
    }
    else{
        printf("The given number %d is not a palindrome number",originalNumber);
    }
    return 0;
}
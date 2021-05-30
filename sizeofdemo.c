/******************************************************
 * File         :   sizeofdemo.c
 * Description  :   C Program to demonstrate the sizeof() operator 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   28/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number1;
    float number2;
    double number3;
    char number4;
    printf("Size of int=%u bytes\n",sizeof(number1));
    printf("Size of float=%u bytes\n",sizeof(number2));
    printf("Size of double=%u bytes\n",sizeof(number3));
    printf("Size of char=%u byte\n",sizeof(number4));
    return 0;
}
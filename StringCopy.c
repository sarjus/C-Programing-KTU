/******************************************************
 * File         :   StringLength.c
 * Description  :   C Program to Compare two Strings  using built-in function
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   04/09/2021
 * ***************************************************/
#include<stdio.h>
#include<string.h>
int main(){
    char firstString [] = "Hello C Programming";
    char secondString [30];
    strcpy(secondString,firstString);
    puts(secondString);
    return 0;
}
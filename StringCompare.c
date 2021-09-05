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
    char firstString [20], secondString[20];
    int result;
    printf("\nEnter the first string:");
    gets(firstString);
    printf("\nEnter the second string:");
    gets(secondString);
    result = strcmp(firstString,secondString);
    switch(result){
        case 0: 
                printf("\nThe given strings are equal");
                break;
        case -1:
                printf("\nThe second string is greater than the first");
                break;
        default:
                printf("\nThe first string is greater than the second");
                
    }
    return 0;
}
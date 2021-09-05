/******************************************************
 * File         :   StringLength.c
 * Description  :   C Program to find the length of the given string 
 *                  with and without using built-in functions 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   31/08/2021
 * ***************************************************/
#include<stdio.h>
#include<string.h>
int main(){
    char inputString[20];
    int charCount=0,i=0;
    printf("Enter the string:");
    gets(inputString);
    //without using built-in function
    /*while(inputString[i]!='\0'){
        charCount++;
        i++;
    }
    printf("\nThe Number Characters in the given String:%d",charCount);
    */
    //without using built-in function
    for(i=0;inputString[i]!='\0';i++);
    printf("\nThe Number Characters in the given String:%d",i);
    //with using built-in function
    charCount = strlen(inputString);
    printf("\nThe Number Characters in the given String using strlen():%d",charCount);

    return 0;
}
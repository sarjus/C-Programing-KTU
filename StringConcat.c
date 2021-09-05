/******************************************************
 * File         :   StringLength.c
 * Description  :   C Program to String Concatenation of the given string 
 *                  with and without using built-in functions 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   01/09/2021
 * ***************************************************/
#include<stdio.h>
#include<string.h>
int main(){
    char sourceString[10], destinationString[20];
    int i,j;
    printf("\nEnter the first String:");
    gets(destinationString);
    printf("\nEnter the second String:");
    gets(sourceString);
    //To find the end of the first string
    /*for(i=0;destinationString[i]!='\0';i++);
    //to add space between two stings
    destinationString[i++]= ' ';
    for(j=0;sourceString[j]!='\0';j++){
        destinationString[i++]=sourceString[j];
    }
    //To make the array to a string
    destinationString[i] = '\0';
    printf("\nThe final concatenated string:");
    puts(destinationString);*/
    //Using Built-in function
    strcat(destinationString,sourceString);
    printf("\nThe final concatenated string:");
    puts(destinationString);
    return 0;
}
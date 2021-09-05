/******************************************************
 * File         :   StringSort.c
 * Description  :   Write a C program to read an English Alphabet through keyboard and 
 *                  display whether the given Alphabet is in upper case or lower case.
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   04/09/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    char ch;
    printf("\nEnter a charcter");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("The given charcter is an uppercase letter");
    }
    else{
          printf("The given charcter is an lowercase letter");
    }
    return 0;
}

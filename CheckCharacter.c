/******************************************************
 * File         :   CheckCharacter.c
 * Description  :   Program to check the given character
 *                  is a capital letter, small letter, number or a special character
 *                  A-Z : 65-90, a-z : 97-122, 0-9: 48-57
 *                  Special Characters: 0-47,58-64,91-96, 123-127
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   04/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    char ch;
    printf("\nEnter the character:");
    scanf("%c",&ch);
    //If the ASCII Value is between 65 and 95 then it is a Capital Letter
    if(ch>=65 && ch<=95){
        printf("\nThe given character is a Capital Letter");
    }
    //If the ASCII Value is between 97 and 122 then it is a Small Letter
    else if(ch>=97 && ch<=122){
        printf("\nThe given character is a Small Letter");
    }
    //If the ASCII Value is between 97 and 122 then it is a Small Letter
    else if(ch>=48 && ch<=57){
        printf("\nThe given character is a Number");
    }
    //This is a special character
    else{
        printf("The given character is a special character");

    }
    return 0;
}
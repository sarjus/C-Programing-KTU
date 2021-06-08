/******************************************************
 * File         :   Experiment 2.1
 * Description  :   Write a C Program to check Whether a Character is Vowel or Consonant
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   08/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                printf("The given characeter is Vowel");
                break;
        default:
                printf("The given characeter is Consonant");

    }
    return 0;
}
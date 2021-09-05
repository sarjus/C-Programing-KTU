/******************************************************
 * File         :   StringDemo.c
 * Description  :   C Program to read and write stings 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   18/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    char myFirstString[10],mySecondString[20],myThirdString[20];
    printf("\nEnter your first string:");
    scanf("%s",myFirstString);
    printf("\nThe string input from user is: %s",myFirstString);
    fflush(stdin);//To clear input buffer
    printf("\nEnter the Second String:");
    gets(mySecondString);
    printf("\nThe string input from user using gets is: %s",mySecondString);
    printf("\nEnter the Thrird String:");
    scanf("%[^\n]", myThirdString); 
    printf("\nThe string input from user using scanf is:");
    puts(myThirdString);
    return 0;

}
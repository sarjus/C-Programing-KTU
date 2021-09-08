/******************************************************
 * File         :   PassbyValueRef.c
 * Description  :   C Program to demonstrate pass by value and reference 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   06/09/2021
 * ***************************************************/
#include<stdio.h>
void swap(int, int);
void swapRef(int*, int*);
int main(){
    int number1,number2;
    printf("\nEnter the first number:");
    scanf("%d",&number1);
    printf("\nEnter the second number:");
    scanf("%d",&number2);
    swap(number1,number2);//pass by value
    printf("\nIn Main program:\n");
    printf("\nNumber 1=%d\tNumber 2=%d",number1,number2);
    swapRef(&number1,&number2);//pass by refernce
    printf("\nNumber 1 address in main=%d",&number1);
    printf("\nIn Main program Again:\n");
    printf("\nNumber 1=%d\tNumber 2=%d",number1,number2);
    return 0;
}
/*Function to swap two numbers*/
void swap(int number1, int number2){
    int temp;
    printf("\nThe numbers before swap\n");
    printf("\nNumber 1=%d\tNumber 2=%d",number1,number2);
    temp = number2;
    number2 = number1;
    number1 = temp;
    printf("\nThe numbers after swap\n");
    printf("\nNumber 1=%d\tNumber 2=%d",number1,number2);

}
void swapRef(int* number1, int* number2){
    int temp;
    printf("\nNumber 1 in fn=%d",number1);
    temp = *number2;
    *number2 = *number1;
    *number1=temp;

}
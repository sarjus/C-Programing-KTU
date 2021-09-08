/******************************************************
 * File         :   factorial.c
 * Description  :   C Program to find factorial of a number
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   07/05/2021
 * ***************************************************/
#include<stdio.h>
int factorial(int);
int factorialRec(int);
int main(){
    int number,factorialValue;
    printf("\nEnter the number to find it's factorial:");
    scanf("%d",&number);
    factorialValue = factorial(number);
    printf("\nFactorial Value of Number %d= %d",number,factorialValue);
    printf("\nEnter the number to find it's factorial:");
    scanf("%d",&number);
    factorialValue = factorialRec(number);
    printf("\nFactorial Value of Number %d= %d",number,factorialValue);

    return 0;
}
//Function to find the factorial of the given number
//returns the result to main
int factorial(int number){
    int i,factorialValue=1;
    for(i=1;i<=number;i++){
        factorialValue = factorialValue *i;

    }
    return factorialValue;

}
//Recursive Function to find the factorial of the given number
//returns the result to main
int factorialRec(int number){
    //base condition
    if(number==0){
        return 1;
    }
    else{
        return number * factorialRec(number-1);
    }
}
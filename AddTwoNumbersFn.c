/******************************************************
 * File         :   AddTwoNumbersFn.c
 * Description  :   Create a function in C programe to add two integer numbers
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   05/09/2021
 * ***************************************************/
#include<stdio.h>
//function prototype
void sum();
void sumArgs(int,int);
int sumArgsRet(int,int);
int main(){
    int number1,number2;
    int sumOfNumbers;
    sum();
    printf("\nReading from Main:\n");
    printf("\nEnter the two integer numbers:");
    scanf("%d%d",&number1,&number2);
    //Actual Parameters number1 & number2
    sumArgs(number1,number2);// calling fn
    printf("\nReading from Main:\n");
    printf("\nEnter the two integer numbers:");
    scanf("%d%d",&number1,&number2);
    //Actual Parameters number1 & number2
   // printf("%d",sumArgsRet(number1,number2));
    sumOfNumbers = sumArgsRet(number1,number2);
    printf("\nPrinting at Main:\n");
    printf("\n%d + %d = %d",number1,number2,sumOfNumbers);
    return 0;
}

void sum(){//fn definition
    int number1,number2,sumOfNumbers;
    printf("\nReading from the Function:\n");
    printf("\nEnter the two integer numbers:");
    scanf("%d%d",&number1,&number2);
    sumOfNumbers = number1 + number2;
    printf("\n%d + %d = %d",number1,number2,sumOfNumbers);

}
//Formal Parameters number3, number4
void sumArgs(int number3, int number4){
    int sumOfNumbers;
    sumOfNumbers = number3 + number4;
    printf("\n%d + %d = %d",number3,number4,sumOfNumbers);
}

int sumArgsRet(int number5, int number6){
    int sumOfNumbers;
   sumOfNumbers = number5 + number6;
   return sumOfNumbers;
  //return number5 + number6;
}
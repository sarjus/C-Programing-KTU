/******************************************************
 * File         :   PrimeorNot.c
 * Description  :   C Program to check the given number is Prime or Not
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   18/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number,i;
    printf("\n\nEnter the numnber to check whether it is Prime or Not?");
    scanf("%d",&number);
    for(i=2;i<=number/2;i++){ 
        if(number%i==0){
            //This is not a prime number
            break;
        }
    }
    printf("\nI am i and my current value is: %d",i);
    if(i>number/2){//The Loop is completely executed
        printf("\nThe given number %d is a Prime Number",number);
    }
    else{//The loop is partially executed
        printf("\nThe given number %d is not a Prime Number",number);
    }

    return 0;
}
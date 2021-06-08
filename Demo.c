/******************************************************
 * File         :   MyFirstProgram.c
 * Description  :   This is a demo program
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   12/05/2021
 * ***************************************************/

#include<stdio.h>
int main(){
    int year;
    printf("\nEnter year to check whether it leap year or not:");
    scanf("%d",&year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Leap year");
            }
            else{
                printf("Not a leap year");
            }
        }
        else{
            printf("Leap year");
        }
    }
    else{
        printf("It is not a Leap year:");
    }
    return 0;
      
}
/******************************************************
 * File         :   MultiplicationTable.c
 * Description  :   C Program to print the multiplication table
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   11/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number,i=1;
    printf("Enter the number:");
    scanf("%d",&number);
    while(i<13){
        printf("\n%d  x  %d  =  %d",i,number,i*number);
        i++;
    }

    return 0;

}
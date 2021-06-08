/******************************************************
 * File         :   switchDemo.c
 * Description  :   Program to demonstrate swich construct in c
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   07/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int jobCode;
    printf("\nEnter the job code of the employee:");
    scanf("%d",&jobCode);
    switch(jobCode){
        case 1:
                printf("\nYour role is Branch Manager");
                break;
        case 2:
                printf("\nYour role is Relationship Manager");
                break;
        case 3: 
                printf("\nYour role is a teller:");
                break;
        default:
                printf("Invalid Job Code:");
                break;
    }

    return 0;
}
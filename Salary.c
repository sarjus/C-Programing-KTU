/******************************************************
 * File         :   Salary.c
 * Description  :   C Program to claculate the gross salary of an employee 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   28/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    float basicSalary;
    float da,hra;
    float grossSalary;
    printf("\nEnter the basic salary of Ramesh:");
    scanf("%f",&basicSalary);
   
    //DA is 40% of Basic Salary
    da = basicSalary*0.40;

    //HRA is 20% of Basic Salary
    hra = basicSalary*0.20;

    grossSalary = basicSalary + da + hra;

    printf("\nRamesh's Salary Statement");
    printf("\nDA=%f",da);
    printf("\nHRA=%f",hra);
    printf("\nGross Salary of Ramesh:%f",grossSalary);


    return 0;
}
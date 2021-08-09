/******************************************************
 * File         :   Pattern1.c
 * Description  :   C Program to print the pattern
 *                     *
 *                    ***
 *                   *****
 *                  *******
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   25/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int row,i,j,starCount=1,k;
    printf("\nEnter the number of rows:");
    scanf("%d",&row);
    //No of rows
    printf("\n");
    for(i=1;i<=row;i++){
        //Printing the space
        for(j=1;j<=row-i;j++){
            printf(" ");
        }
        //print *
        for(k=1;k<=starCount;k++){
            printf("*");
        }
        printf("\n");
        starCount+=2;
    }
    return 0;
}
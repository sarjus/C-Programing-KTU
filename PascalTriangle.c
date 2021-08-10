/******************************************************
 * File         :   PascalTriangle.c
 * Description  :   C Program to print Pascal Triangle using Array
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   10/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int array[30], temp[30], i, j, k, l, noOfLines;           //using 2 arrays
    printf("Enter the number of lines to be printed: ");
    scanf("%d", &noOfLines);
    temp[0] = 1;
    array[0] = 1;
    //Printing the Spaces in first row
    for (j=0;j<noOfLines; j++){
        printf(" ");
    }
    //Print "1" in first row
    printf("1\n");

   for (i=1; i <noOfLines;i++){
        //Print spaces at the begining of the rows
        for (j = 0; j<noOfLines-i; j++){
            printf(" ");
        }
        //Set the last element in row
        array[i] = 1;
        //print first element in row
        printf("1 ");
        for (k=1;k<=i;k++){
            printf("%d ", array[k]);
            temp[k] = array[k];
            array[k] = temp[k-1] + temp[k];        
        }
         printf("\n");
        
    }
    return 0;
}
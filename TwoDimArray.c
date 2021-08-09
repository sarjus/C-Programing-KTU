/******************************************************
 * File         :   TwoDimArray.c
 * Description  :   C Program to implement 2D Array
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   04/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int i,j;
    int myArray[5][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12},
        {13,14,15}
    };
    for(i=0;i<5;i++){

        for(j=0;j<3;j++){
            printf("%d\t",myArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
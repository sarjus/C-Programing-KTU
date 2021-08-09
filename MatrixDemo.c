/******************************************************
 * File         :   MatrixAddidion.c
 * Description  :   C Program to Calculate Row sum and Column Sum of a Matrix 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   09/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int myMatrix[10][10],row,col,i,j;
    int rowSum,colSum;
    printf("\nEnter the number rows:");
    scanf("%d",&row);
    printf("\nEnter the number of columns:");
    scanf("%d",&col);
    printf("\nEnter the elements:");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&myMatrix[i][j]);
        }
    }
    printf("\nThe given matrix is:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",myMatrix[i][j]);
        }
        printf("\n");
    }
    //Calculating Row & Column Sum
    for(i=0;i<row;i++){
        rowSum = 0;// Initialize row sum to zero
        colSum = 0;// Intialize colum sum to zero
        for(j=0;j<col;j++){
            rowSum = rowSum + myMatrix[i][j];
            colSum = colSum + myMatrix[j][i];
        }
        printf("\nRow%d sum=%d",i,rowSum);
        printf("\nColumn%d sum=%d",i,colSum);
    }

    return 0;
}
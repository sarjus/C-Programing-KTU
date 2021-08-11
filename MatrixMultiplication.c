/******************************************************
 * File         :   MatrixMultiplication.c
 * Description  :   C Program to implement Matrix Multiplication
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   11/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int firstMatrix[10][10],secondMatrix[10][10],productMatrix[10][10];
    int p,q,r,s,i,j,k;
    printf("\nPlease enter the row and colum values of the first matrix:");
    scanf("%d%d",&p,&q);
    printf("\nEnter the elements of first matrix:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("\nRow[%d][%d] ::",i,j);
            scanf("%d",&firstMatrix[i][j]);
        }
    }
    printf("\nThe first Matrix:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",firstMatrix[i][j]);
        }
        printf("\n");
    }
      printf("\nPlease enter the row and colum values of the second matrix:");
    scanf("%d%d",&r,&s);
    printf("\nEnter the elements of second matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            printf("\nRow[%d][%d] ::",i,j);
            scanf("%d",&secondMatrix[i][j]);
        }
    }
    printf("\nThe second Matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<s;j++){
            printf("%d\t",secondMatrix[i][j]);
        }
        printf("\n");
    }
    if(q==r){
        for(i=0;i<p;i++){
            for(j=0;j<s;j++){
                productMatrix[i][j]=0;
                for(k=0;k<q;k++){
                    productMatrix[i][j] =  productMatrix[i][j] + firstMatrix[i][k]*secondMatrix[k][j];
                }
            }
        }
    printf("\nThe Product Matrix:\n");
    for(i=0;i<p;i++){
        for(j=0;j<s;j++){
            printf("%d\t",productMatrix[i][j]);
        }
        printf("\n");
    }    

    }
    else{
        printf("\nSorry, the matrix multiplication is not possible");
    }

    return 0;
}
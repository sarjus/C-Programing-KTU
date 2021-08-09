/******************************************************
 * File         :   MatrixAddidion.c
 * Description  :   C Program to find the matrix is a triangular matrix or not 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   09/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int myMatrix[10][10];
    int size,row,col,isLowerTriangle=1,isUpperTriangle=1;
    printf("\nEnter the number of rows/colums of the given square matrix:");
    scanf("%d",&size);
    printf("\nEnter the elements\n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("MyMatrix[%d][%d]::",row,col);
            scanf("%d",&myMatrix[row][col]);
        }
    }
    printf("\nThe given Matrix is:\n");
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            printf("%d\t",myMatrix[row][col]);
        }
        printf("\n");
    }
    //Lower Triangle and Upper Triangle Checking
    for(row=0;row<size;row++){
        for(col=0;col<size;col++){
            if(col>row){
                if(myMatrix[row][col]!=0){
                    isLowerTriangle = 0;
                }
            }
            if(row>col){
                if(myMatrix[row][col]!=0){
                    isUpperTriangle = 0;
                }
            }
        }
    }
    if(isLowerTriangle==1){
        printf("\nThe given matrix is a Lower Triangle Matrix");
    }
    else{
        printf("\nThe given matrix is not a Lower Triangle Matrix");
    }
    if(isUpperTriangle==1){
        printf("\nThe given matrix is a Upper Triangle Matrix");
    }
    else{
        printf("\nThe given matrix is not a Upper Triangle Matrix");
    }
    if(isLowerTriangle==1 || isUpperTriangle ==1){
        printf("\nThe given matrix is a triangular matrix");
    }
    else{
        printf("\nThe given matrix is not a triangular matrix");

    }
    return 0;
}
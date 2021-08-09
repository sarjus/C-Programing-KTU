/******************************************************
 * File         :   MatrixAddidion.c
 * Description  :   C Program to implement Matrix Addition
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   06/08/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int row1,col1,row2,col2,i,j;
    int myFirstMatrix[10][10],mySecondMatrix[10][10],finalMatrix[10][10];
    printf("Enter the number of of rows of the first matrix(Maximum size is 10):");
    scanf("%d",&row1);
    printf("Enter the number of of columns of the first matrix(Maximum size is 10):");
    scanf("%d",&col1);
    //Read the matrix
    printf("\nEnter the array elements");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d",&myFirstMatrix[i][j]);
        }
    }
    printf("\nThe First Matrix\n");
    for(i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d\t",myFirstMatrix[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of of rows of the second matrix(Maximum size is 10):");
    scanf("%d",&row2);
    printf("Enter the number of of columns of the second matrix(Maximum size is 10):");
    scanf("%d",&col2);
    //Read the matrix
    printf("\nEnter the array elements");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            scanf("%d",&mySecondMatrix[i][j]);
        }
    }
    printf("\nThe Second Matrix\n");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("%d\t",mySecondMatrix[i][j]);
        }
        printf("\n");
    }
    if(row1==row2 && col1==col2){
        //Matrix Addition
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                finalMatrix[i][j] = myFirstMatrix[i][j] + mySecondMatrix[i][j];
            }
        }
    printf("\nThe Final Matrix\n");
    for(i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("%d\t",finalMatrix[i][j]);
        }
        printf("\n");
    }    

    }
    else{
        printf("Sorry, the Matrix addition is not possible");
    }
    return 0;
}
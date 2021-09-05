/******************************************************
 * File         :   BubbleSort.c
 * Description  :   C Program to implement Bubble Sort
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   04/09/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int array[20];
    int size,i,j,temp;
    printf("\nEnter the size of the array[maximum size is 20]:");
    scanf("%d",&size);
    printf("\nEnter the elelments:");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    //Bubble sort
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1]=temp;
            }
        }
    }
    //print result
    printf("\nThe sorted array is:\t");
    for(i=0;i<size;i++){
        printf("%d\t",array[i]);

    }


    return 0;
}
/******************************************************
 * File         :   BubbleSort.c
 * Description  :   C Program to implement Bubble Sorting Algorithm
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   22/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int myArray[10],i,j,limit,temp;
    //Read the size of the Array
    printf("\nEnter the size of the array(Maximum is limited to 10)");
    scanf("%d",&limit);
    //Read the the Array
    printf("\nEnter the %d elements:",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&myArray[i]);
    }

    //print the Array
    printf("\nThe Given Array Before Sort:");
    for(i=0;i<limit;i++){
        printf("%d\t",myArray[i]);
    }
    // Bubble Sort
    for(i=0;i<limit-1;i++){
        for(j=0;j<limit-i-1;j++){
            if(myArray[j]>myArray[j+1]){
                //Swapping
                temp = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1]=temp;
            }

        }
    }

    //print the Array
    printf("\nThe Given Array After Sort:");
    for(i=0;i<limit;i++){
        printf("%d\t",myArray[i]);
    }

    return 0;
}
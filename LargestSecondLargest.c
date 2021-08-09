/******************************************************
 * File         :   LargestSecondLargest.c
 * Description  :   C Program to find the Largest & Second Largest Element from an  Array
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   23/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int myArray[10],limit,i,largest,secondLargest;
    printf("\nEnter the maximum no of elements in the array:");
    scanf("%d",&limit);
    //Read the array
    printf("\nEnter the elements:");
    for(i=0;i<limit;i++){
        scanf("%d",&myArray[i]);
    }
    //To find the largest
    largest = myArray[0];
    for(i=1;i<limit;i++){
        if(myArray[i]>largest){
            //Second Largest
            secondLargest = largest;
            //Largest
            largest = myArray[i];
        }       
      
    }
    //print the Array
    printf("\nThe given array is:");
    for(i=0;i<limit;i++){
        printf("%d\t",myArray[i]);
    }
    printf("\nLargest Element=%d",largest);
    printf("\nSecond Largest Element=%d",secondLargest);



    return 0;
}
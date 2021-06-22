/******************************************************
 * File         :   ArrayOperations.c
 * Description  :   C Program to perform a menu driven program for array operations
 *                  1. Add an Element
 *                  2. Search an Element
 *                  3. Delete an Element
 *                  4. Display Array
 *                  5. Exit
 *                  
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   21/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int choice,i=0,j,k,element;
    int myArray[10];
    do{
        printf("\n1. Add an Element");
        printf("\n2. Display");
        printf("\n3. Search an Element");
        printf("\n4. Delete Element");
        printf("\n5. Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    printf("\nEnter the elelement to insert:");
                    scanf("%d",&element);
                    myArray[i]=element;
                    //incrementing the index position
                    i++;
                    printf("I am i:%d",i);
                    break;
            case 2:
                    printf("\nThe Array is:\t");
                    for(j=0;j<i;j++){
                        printf("%d\t",myArray[j]);
                    }//end of j
                    break;
            case 3:
                    //Linear Search
                    printf("\nEnter the element to search");
                    scanf("%d",&element);
                    for(j=0;j<i;j++){
                        if(myArray[j]==element){
                            printf("\nThe element found at position: %d",j+1);
                        }
                    }
                    break;
            case 4:
                    //Delete
                    printf("\nEnter the element to delete");
                    scanf("%d",&element);
                    for(j=0;j<i;j++){
                        //Ee
                        if(myArray[j]==element){
                            for(k=j;k<i;k++){
                                myArray[k] = myArray[k+1];
                            }
                            i--;
                        }
                    }
                    break; 
            default:
                    break;
        }//end of switch

    }while(choice<5);
    return 0;
}
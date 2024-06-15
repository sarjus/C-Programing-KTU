/******************************************************
 * File         :   numberpresentornot.c
 * Description  :   Write down a C program to check if a number is present in a given list of numbers.
                    If present give location of the number otherwise insert the number in the list at the end.
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   21/05/2021
 * ***************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,number,i;

    // Asking user for the number of elements in the list
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    // Dynamically allocating memory for the array
    int *arr = (int *)malloc((n+1) * sizeof(int));


    // Taking array input from the user
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }



    // Asking user for the number to search/insert
    printf("Enter the number to search or insert: ");
    scanf("%d", &number);

    for (i = 0; i < n; i++) {
        if (arr[i] == number) {
            printf("Number %d is found at index %d.\n", number, i+1);
            break;
        }
    }
    if(i==n){
        // Number is not found, insert at the end
        arr[n] = number;
        printf("Number %d is not found in the list. It has been inserted at the end of the list.\n", number);
        n++; // Increase the size of the list

    }
     // Print the updated list
        printf("Final list:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }



    // Freeing the allocated memory
    free(arr);

    return 0;
}

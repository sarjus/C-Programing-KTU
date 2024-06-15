/******************************************************
 * File         :   checksymmetricmatrix.c
 * Description  :   Write a C program to accept a 2-D integer matrix and check whether
                    it is symmetric or not ( A matrix ‘A’ is symmetric if A=AT).
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   21/05/2021
 * ***************************************************/
#include <stdio.h>

int main() {
    int n;

    // Asking user for the size of the matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[100][100];

    // Taking matrix input from the user
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking if the matrix is symmetric
    int symmetric = 1; // Assume the matrix is symmetric
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0; // Matrix is not symmetric
                break;
            }
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

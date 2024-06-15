/******************************************************
 * File         :   checksymmetricmatrix.c
 * Description  :   Write a program in C to copy the contents of one file into another.
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   21/05/2021
 * ***************************************************/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100], destFileName[100];
    char ch;

    // Ask user for the name of the source file
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");


    // Ask user for the name of the destination file
    printf("Enter the name of the destination file: ");
    scanf("%s", destFileName);

    // Open the destination file in write mode
    destFile = fopen(destFileName, "w");

    // Copy contents from source file to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}

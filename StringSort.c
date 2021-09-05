/******************************************************
 * File         :   StringSort.c
 * Description  :   C Program to implement Bubble Sort in string array
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   04/09/2021
 * ***************************************************/
#include<stdio.h>
#include<string.h>
int main(){
    char stringArray[20][20];
    char temp[20];
    int noOfStrings,i,j;
    printf("\nEnter the no of strings[Maximun 20]:");
    scanf("%d",&noOfStrings);
    //Reading strings
    printf("\nEnter %d strings",noOfStrings);
    for(int i=0;i<noOfStrings;i++){
        fflush(stdin);
        gets(stringArray[i]);
       
    }
    //Printing Strings
    printf("\nThe given Strings are:\n");
    for(i=0;i<noOfStrings;i++){
        puts(stringArray[i]);
    }
    for(i=0;i<noOfStrings-1;i++){
        for(j=0;j<noOfStrings-1-i;j++){
            if(strcmp(stringArray[j],stringArray[j+1])>0){
                strcpy(temp,stringArray[j]);
                strcpy(stringArray[j],stringArray[j+1]);
                strcpy(stringArray[j+1],temp);
            }
        }
    }
    //Printing Strings
    printf("\nThe sorted Strings are:\n");
    for(i=0;i<noOfStrings;i++){
        puts(stringArray[i]);
    }
return 0;
}
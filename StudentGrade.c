/******************************************************
 * File         :   StudentGrade.c
 * Description  :   program prints the grade as per the marks scored in a test
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   02/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int mark;
    printf("Enter the mark obtained by the student(out of 100):");
    scanf("%d",&mark);
    if(mark>75){
		printf("First class");
	}
	else if(mark>65){
		printf("Second class");
	}
	else if(mark>55){
		printf("Third class");
	}
	else{
		printf("Fourth class");
	}
    return 0;
}
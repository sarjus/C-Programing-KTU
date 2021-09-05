/******************************************************
 * File         :   GeneratePrimenumberfn.c
 * Description  :   Create a function in C programe to generate prime numbers 
 *                  between two given numbers given by the user
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   05/09/2021
 * ***************************************************/
#include<stdio.h>
void generatePrime(int,int);
int checkPrime(int);
int main(){
    int start,end;
    printf("\nEnter the starting and ending number to generate the prime numbers:");
    scanf("%d%d",&start,&end);
    generatePrime(start,end);
    return 0;
}
/*Generate Prime numbers between the given range*/
void generatePrime(int start,int end){
    int i;
    for(i=start;i<=end;i++){
        //If the number is prime the checkPrime() will return 1
        if(checkPrime(i)==1){
            printf("%d\t",i);
        }
    }
}
/*Checks whether the given number is prime or not
  if it is prime thern returns 1 else 0 */
int checkPrime(int number){
    int i;
    for(i=2;i<=number/2;i++){
        if(number%i==0){
            return 0;
        }
    }
    return 1;

}

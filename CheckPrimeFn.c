/******************************************************
 * File         :   CheckPrimeFn.c
 * Description  :   Create a function in C programe to check the given number
 *                  is prime or not
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   05/09/2021
 * ***************************************************/
#include<stdio.h>
int checkPrime(int);
int main(){
    int number,isPrime;
    printf("\nEnter the number to check whether it is prime or not:");
    scanf("%d",&number);
    isPrime = checkPrime(number);
    if(isPrime==1){
        printf("\nThe given number %d is a prime number",number);
    }
    else{
        printf("\nThe given number %d is not a prime number",number);
    
    }

    return 0;
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
/******************************************************
 * File         :   perfectnumber.c
 * Description  :   Write a C program to check whether a given number is perfect or not (A perfect
                    number is a positive integer that is equal to the sum of its factors excluding the number itself).
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   21/05/2021
 * ***************************************************/
#include <stdio.h>


int main() {
    int number, sum=0;

    // Asking the user for input
    printf("Enter a number: ");
    scanf("%d", &number);


    // Find all divisors of num and calculate their sum
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the number
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}

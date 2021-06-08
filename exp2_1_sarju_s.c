/******************************************************
 * File         :   Experiment 2.1
 * Description  :   C Program demonstrate a calculator(+,-,*, /, %) 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   08/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int number1, number2;
    char operator;
    printf("\nEnter the operations to be performed(+,-,*, /, %%) ");
    scanf("%c",&operator);
    printf("\nEnter two integer numbers:");
    scanf("%d%d",&number1,&number2);
    switch(operator){
        case '+':
                printf("\nSum=%d",number1+number2);
                break;
        case '-':
                printf("Difference=%d",number1-number2);
                break;
        case '*':
                printf("Multiplication=%d",number1*number2);
                break;
        case '/':
                printf("Division=%f",(float)number1/number2);
                break;
        case '%':
                printf("Modulus=%d",number1%number2);
                break;
        default:
                printf("Invalid Operator");
                break;
    }

    return 0;
}
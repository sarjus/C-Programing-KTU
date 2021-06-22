/******************************************************
 * File         :   ReverseNumber.c
 * Description  :   Menu driven calculator
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   15/06/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int choice, number1,number2;
    do{
        printf("\n----------");
        printf("\nCALCULATOR");
        printf("\n----------");
        printf("\n1.ADDION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.MODULUS\n6.EXIT");
        printf("\nPlease enter your choice:");
        scanf("%d",&choice);
        //To avoid user entry in option 6
        if(choice!=6){
            printf("Enter the numbers:");
            scanf("%d%d",&number1,&number2);
        }
        switch (choice){
            case 1:
                    printf("%d + %d = %d",number1,number2,number1+number2);
                    break;
            case 2:
                    printf("%d - %d = %d",number1,number2,number1-number2);
                    break;
            case 3:
                    printf("%d x %d = %d",number1,number2,number1*number2);
                    break;
            case 4:
                    printf("%d / %d = %f",number1,number2,(float)number1/number2);
                    break;
            case 5:
                    printf("%d %% %d = %d",number1,number2,number1%number2);
                    break;
            default:
                    break;
        }//end of swith

    }while(choice<6);//Exit Control Loop
    return 0;
}
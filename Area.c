/******************************************************
 * File         :   Area.c
 * Description  :   C Program calculate area of rectangle & circle, 
 *                  perimeter of rectangle and circumference of circle 
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   28/05/2021
 * ***************************************************/
#include<stdio.h>
int main(){
    int length, breadth,areaOfRectangle,perimeter;
    int radius;
    float areaOfCircle;
    float circumference;
    printf("\nEnter the Length of the rectangle:");
    scanf("%d",&length);
    printf("\nEnter the Breadth of the rectangle:");
    scanf("%d",&breadth);

    printf("\nEnter the Radius of the Circle:");
    scanf("%d",&radius);

    //Area of Rectangle
    areaOfRectangle = length * breadth;
    printf("Area of Rectangle with Length=%d and Breadth=%d is:%d",length,breadth,areaOfRectangle);

    //Perimeter of Rectangle
    perimeter = 2*(length+breadth);
    printf("\nPerimeter of Rectangle with Length=%d and Breadth=%d is:%d",length,breadth,perimeter);

    //Area of Circle
    areaOfCircle = 3.14*radius*radius;
    printf("\nArea of Circle with Radius%d is:%f",radius,areaOfCircle);

    //Circumference of Circle
    circumference = 2*3.14*radius;
    printf("\nCircumference of Circle with Radius%d is:%f",radius,circumference);




    return 0;
}
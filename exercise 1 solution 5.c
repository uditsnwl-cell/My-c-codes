/*this is the solution of question number 5 The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle */

#include <stdio.h>
int main()
{ 
    float l, b, r, a, p, a_c;

    printf("Enter the length and breadth of the rectangle: ");
    scanf("%f %f", &l, &b);

    a = l * b;
    p = 2 * (l + b);

    printf("Area of rectangle is : %f\n", a);
    printf("Perimeter of rectangle is : %f\n", p);

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a_c = 3.14 * r * r;

    printf("Area of the circle is : %f\n", a_c);

    return 0;
}
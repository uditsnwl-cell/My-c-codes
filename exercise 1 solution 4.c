/*this is the solution of question number 4 ) Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees.*/
#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Temperature in Centigrade: %f\n", c);

    return 0;
}       
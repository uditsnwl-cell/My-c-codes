/*this is the solution of question number 2 that is The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters.*/
#include <stdio.h>
int main()
{
 float km,m,ft,inch,centimeters;
    printf("enter the distance from one city to another city in kilomters:");
    scanf("%f", &km); /* give the box to enter the value */
     
     m= km*1000;
     ft= km*3280.84;
     inch= km*39370.1;  
     centimeters= km*100000;


    printf("distance in meters=%f",m);
         printf(" meter \n");
    printf("distance in feet=%f",ft);
     printf(" feets \n");
    printf("distance in inch=%f",inch);
     printf(" inches \n");
    printf("distance in centimeters=%f",centimeters);
         printf(" centimeters \n");
return 0;
}

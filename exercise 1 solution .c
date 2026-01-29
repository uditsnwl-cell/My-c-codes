/* this is the solution of question number 1 tat is 
Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary.*/

#include <stdio.h>
int main()
{
	int b_s;
    float g_s;
    printf("enter your basic salary:");
/*this will give the prompt to enter the salary*/
    scanf("%d", &b_s);

    g_s = b_s + (0.4 * b_s) + (0.2 * b_s);
    printf("gross salary=%f", g_s);
	return 0;
}


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


/*this is the solution of question number 3 If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100.*/
#include <stdio.h>
int main()
{
    
    int s1,s2,s3,s4,s5,t_m;
   
    float per;
    printf("enteres the marks obtained by the you in five respective subjectes:");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    t_m=s1+s2+s3+s4+s5;
    per = (t_m * 100) / 500;

    printf(" congratulations! \n");
    printf(" your total marks=%d \n",t_m);
    printf(" your percentage=%f\n",per);

    return 0;

}



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
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
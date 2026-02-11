/* Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour. */



#include <stdio.h>
int main()
{
    int t = 1, er, a;
    while (t <= 10)
    {
        printf("\nenter the over time above 40 hours you have perform");
        scanf("%d", &a);
        er = a * 12;

        printf("\nyou get extra sallary of rupees: %d", er);

        t++;
    }
    return 0;
}


/* Write a program to find the factorial value of any number 
entered through the keyboard. */


#include <stdio.h>
int main()
{
    float x;

    printf("enter the value of the number");
    scanf("%f", &x);
    if (x < 0)
    {
        x = -x;
    }

    while (x >= 1)
    {
        x = x - 1;
    }

    printf("the fractional value of the number is:%f", x);
    return 0;
}


/* Two numbers are entered through the keyboard. Write a 
program to find the value of one number raised to the power 
of another.
 */


#include <stdio.h>
int main()
{ 
    int res=1,x,y;

     printf("enter the value of the number and its power respectively");
    scanf("%d %d",&x,&y);

    while(y>=1)
   {
    res=res*x;
    y--;

   }

   printf("the ans is:%d",res);

   return 0;
}


/* Write a program to print all the ASCII values and their 
equivalent characters using a while loop. The ASCII values 
vary from 0 to 255. */




#include <stdio.h>
int main()
{
    int i=1;
    while(i<=255)
    {
    printf("Ascii vlue of %d is %c\n",i,i);
   i++;
    }
   return 0;


}



/* Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 ) */



#include <stdio.h>  

int main()  
{  
  int i,a,s,d; 
  for(i=1;i<=500;i++)
  {
     a=i;
    s=0;

    while(a>0)
    { 
        d=a%10;
        s=s+(d*d*d);
        a=a/10;

    }

    if (s==i)
    {
        printf("%d is an armstrong number\n",i);
    }
 }
    return 0;
}


/* Write a program for a matchstick game being played between 
the computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows: 
− There are 21 matchsticks. 
− The computer asks the player to pick 1, 2, 3, or 4 
matchsticks. 
− After the person picks, the computer does its 
picking. 
− Whoever is forced to pick up the last matchstick 
loses the game */



#include <stdio.h>  

int main()  
{
    int i,m,cc,ml=21;
 while(ml>1)
 {
    printf("entr the number of macthsticks you wnat to pick (1-4)");
    scanf("%d",&i);

    ml=ml-i;
    cc=5-i;
    ml=ml-cc;

    printf("your choice: %d\n",i);
    printf("computer choice: %d\n",cc);
    printf("matchsticks left: %d\n",ml);
 }
   if (ml==1)
   {
    printf("computer wins");
}

   return 0;
}


/* 
Write a program to enter the numbers till the user wants and 
at the end it should display the count of positive, negative and 
zeros entered */



#include <stdio.h>  

int main()  
{
    int i,p=0,n=0,z=0;
    char a;

    do{
        printf("enter your number");
        scanf("%d",&i);

     if(i>0) 
     p++;
     if(i<0)
     n++;
     if(i==0)
     z++;
     printf("positive numbers are:%d\n",p);
     printf("negative numbers are:%d\n",n);
     printf("zeroes are:%d\n",z);
     printf("do you want to continue y/n ");
     scanf(" %c",&a);
    } while(a=='y'||a=='Y');
    printf("thankyou for using this program");
    return 0;

}


/* Write a program to print all prime numbers from 1 to 300. 
(Hint: Use nested loops, break and continue) */



#include <stdio.h>

int main()
{
    int i, j, flag;

    for (i = 2; i <= 300; i++)   
    {
        flag = 0;               

        for (j = 2; j <= i/2; j++)  
        {
            if (i % j == 0)      
            {
                flag = 1;        
                break;           
            }
        }

        if (flag == 1)
            continue;           

        printf("%d\n", i);       
    }

    return 0;
}



/* Write a program to fill the entire screen with a smiling face. 
The smiling face has an ASCII value 1. */


#include <stdio.h>
 int main()
{
  while(1)
 {
    printf("\n%c",1);
 }

  return 0;
}

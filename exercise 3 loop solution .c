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


/* 
Write a program to find the octal equivalent of the entered 
number.  */


#include <stdio.h>
int main()
{
 int i=0,rem[300],num;
 printf("enter the number of your choice:");
 scanf("%d", &num);

    if(num==0){
    printf("the octal equivalent of the entered number is 0");
   
    }
    else{
           while(num>0)
           {
             rem[i]=num%8;
             num=num/8;
             i++;
           }
             printf("the octal number of the given digit is :");

           for(int j=i-1;j>=0;j--)
            {
              printf("%d", rem[j]);
            }
        }

    return 0;    
}





/* 
 Write a program to add first seven terms of the following 
series using a for loop: 
1/1!+ 2/2!+3/3! ……
 */


#include <stdio.h>
int main()
{
    int i;
    float sum=0,n,pf=1;

    for(i=1;i<=7;i++){
      n=i;
      pf=pf*n;
      sum=sum+(n/pf);
    }
    printf("the ans of the question is %f",sum);
   
}



/* Write a program to generate all combinations of 1, 2 and 3 
using for loop. */


#include <stdio.h>
int main()
{  
    int first,second,third;

for(first = 1; first <= 3; first++){
   for(second = 1; second <= 3; second++)
       for(third = 1; third <= 3; third++)
       
    printf("%d,%d,%d",first, second, third);
}

return 0;
}




/* According to a study, the approximate level of intelligence of 
a person can be calculated using the following formula:  
i = 2 + ( y + 0.5 x )  
Write a program, which will produce a table of values of i, y 
and x, where y varies from 1 to 6, and, for each value of y, x 
varies from 5.5 to 12.5 in steps of 0.5. */



#include <stdio.h>
int main()
{  
    int y;
    float x,i;


for(y= 1; y <= 6; y++){
   for(x =5.5; x <= 12.5;x=x+0.5){
       
      i = 2 + ( y + 0.5 * x ); 
       
    printf("%d,%0.1f,%0.2f",y,x,i);}
}

return 0;
}


/* 
 Write a program to fill the entire screen with diamond and 
heart alternatively. The ASCII value for heart is 3 and that of 
diamond is 4. 
 */



#include <stdio.h>
int main()
{  

int i=3,j=4;

for(;;){
  printf("%c",i);
printf("%c",j);

}
 return 0;
}




/* Write a program to print the multiplication table of the 
number entered by the user. The table should get displayed in 
the following form. 
29 * 1 = 29 
29 * 2 = 58 
 …  */ 



#include <stdio.h>
int main()
{
int n,x,mul;
printf("enter the number yop want the table of: ");
scanf("%d",&n);
for(x=1;x<=10;x++){
    mul=n*x;
   printf("%d*%d=%d\n",n,x,mul);

}
return 0;

}

/* Write a program to produce the following output:
      1
    2   3
  4   5   6
7   8    9  10 
*/




#include <stdio.h>

int main() {
    int i, j, k = 1, rows = 4;

    for(i = 1; i <= rows; i++) {
        
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        // Print numbers
        for(j = 1; j <= i; j++) {
            printf("%d   ", k++);
        }

        printf("\n");
    }

    return 0;
}





/*Write a program to produce the following output:
       1
     1   1
   1   2   1
 1   3   3   1
1   4   6   4   1 */


#include <stdio.h>

int main() {
    int i, j, k, num, rows = 5;

    for(i = 0; i < rows; i++) {
        
        // Print spaces
        for(j = 0; j < rows - i; j++) {
            printf("  ");
        }

        num = 1;  // first value in every row is 1
        
        // Print numbers
        for(k = 0; k <= i; k++) {
            printf("%d   ", num);
            num = num * (i - k) / (k + 1);  // formula
        }

        printf("\n");
    }

    return 0;
}


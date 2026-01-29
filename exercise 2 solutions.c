 /* If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred */




#include <stdio.h>
int main() {
   int cp,sp,p,l;

   printf("enter cost price and the selling price respectively");
   scanf("%d %d",&cp,&sp);

   p=sp-cp;
   l=cp-sp;

   if(sp>cp)
        printf(" you made a profit of %d",p);
     else if (cp>sp)
     printf(" you made a loss of %d",l);

     else 
     printf(" no profit no loss");

     return 0;
     
}





/*  Any integer is input through the keyboard. Write a program to 
 find out whether it is an odd number or even number. */



#include <stdio.h>
int main()
 {
  int x;
   printf(" Entr any integer");
   scanf("%d",&x);

   if (x%2==0)
   printf("integer is even");
else 
printf("integer is odd");

return 0;
}




/* Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not. 
(Hint: Use the % (modulus) operator) */



#include <stdio.h>
int main() {
   int y;
   printf("enter any year");
scanf("%d",&y);

if (y%4==0)
printf("it is a leap year ");

else 
printf("it is not a leap year");

return 0;
}




/* According to the Gregorian calendar, it was Monday on the 
date 01/01/1900. If any year is input through the keyboard 
write a program to find out what is the day on 1st January of 
this year. */




#include <stdio.h>
int main() { 
   int y,d,rem;
   printf("enter any year after 1900");
   scanf("%d",&y);

   d=y-1900;
   rem=d%7;
   if (rem==0)
   printf("it is monday");
   else if (rem==1)        
   printf("it is tuesday");
   else if (rem==2)
   printf("it is wednesday");
   else if (rem==3)
   printf("it is thursday");
   else if (rem==4)
   printf("it is friday");
   else if (rem==5)
   printf("it is saturday");
   else
   printf("it is sunday");

   return 0;
}




/* A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.
 */




#include <stdio.h>
int main() {
   int n,o,r=0,d1,d2,d3,d4,d5;
   printf("enter any 5 number to reverse");
   scanf("%d",&n);
  
   o=n;
d1=n%10; n=n/10;
d2=n%10; n=n/10;
d3=n%10; n=n/10;
d4=n%10; n=n/10;
d5=n%10;

   r=d1*10000+d2*1000+d3*100+d4*10+d5;

   if (o==r)
   printf("number is palindrome\n");
   else     
  { 
   printf("number is not palindrome\n");
  }
  printf("reversed number is %d",r);
 return 0;
}





/* If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three */




#include <stdio.h>
int main() {

   int a,b,c;
   printf("enter age of Ram,Shyam,Ajay respectively");
   scanf("%d %d %d",&a,&b,&c );

   if(a<b && a<c)
   printf("Ram is youngest");
 if(b<a && b<c)
   printf("Shyam is youngest");
 if(c<b && c<a)
   printf("ajay is youngest");
   return 0;
}




/* Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is valid if the sum of all the three angles 
is equal to 180 degrees.
 */



#include <stdio.h>
int main()
 {   
   int a,b,c;
   printf("enter angles of triangele");
   scanf("%d %d %d",&a,&b,&c);
   if (a+b+c==180)
   printf("it is a valid triangle");
   else  
   printf("it is not a valid triangle");  
 return 0;
}



/* Find the absolute value of a number entered through the 
keyboard */



#include <stdio.h>
int main() {
   int x,a,ab;
   printf("enter any integer");
   scanf("%d",&x);

   a=0-x;

   if (a<0)
   ab=a*-1;
   else if (a>0)
   ab=a;
    printf("the absolute value is %d",ab);

   return 0;
}




 /* Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter. */


#include <stdio.h>
int main() {   

   int l,p,a,b;
   printf("enter length and breadth of rectangle respectively");
   scanf("%d %d",&l,&b);

   a=l*b;
   p=2*(l+b);
     if (a>p)
     printf("area is greater than perimeter");
     else 
     printf("perimeter is greater than area");
   return 0;
}




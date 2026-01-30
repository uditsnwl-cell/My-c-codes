/* Any year is entered through the keyboard, write a program to 
determine whether the year is leap or not. Use the logical 
operators && and || */


#include <stdio.h>
#include <math.h>   
int main() {
   int y,lp;

   printf("Enter a year: ");
    scanf("%d",&y);

    if (y%4==0 && y%100!=0 || y%400==0) {
        printf("it is a leap year\n");
    } else {
        printf("it is not a leap year\n");
    }
    return 0;
}




/* Any character is entered through the keyboard, write a 
program to determine whether the character entered is a 
capital letter, a small case letter, a digit or a special symbol. 
The following table shows the range of ASCII values for 
various characters. 
Characters ASCII Values 
A – Z 
a – z 
0 – 9 
special symbols 
65 – 90 
97 – 122 
48 – 57 
 0 - 47, 58 - 64, 91 - 96, 123 - 127 */






#include <stdio.h>

int main() 
{
   char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

     if(ch>=65 && ch<=90)
       printf("it is a capital letter\n");
     else if (ch>=97 && ch<=122)
      printf("it is a small letter\n");
     else if (ch>=48 && ch<=57)
     printf("it is a digit\n");
     else if (ch>=0 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=127)
     printf(" it is a special character\n");
        
    return 0;
}


/* An Insurance company follows following rules to calculate 
premium. 
(1) If a person’s health is excellent and the person is between 
25 and 35 years of age and lives in a city and is a male 
then the premium is Rs. 4 per thousand and his policy 
amount cannot exceed Rs. 2 lakhs. 

(2) If a person satisfies all the above conditions except that 
the sex is female then the premium is Rs. 3 per thousand 
and her policy amount cannot exceed Rs. 1 lakh.

(3) If a person’s health is poor and the person is between 25 
and 35 years of age and lives in a village and is a male 
90 Let Us C 
then the premium is Rs. 6 per thousand and his policy 
cannot exceed Rs. 10,000. 

(4) In all other cases the person is not insured. 
Write a program to output whether the person should be 
insured or not, his/her premium rate and maximum amount 
for which he/she can be insured.
 */

#include <stdio.h>  
  int main() 
{
    int num;
    int h,a,l,s;

      printf("Enter health (1=excellent, 2=poor)?\n");
      scanf("%d",&h);
      printf("Enter age:\n");
      scanf("%d",&a);
      printf("Enter location (1=city, 2=village):\n");
      scanf("%d",&l);
      printf("Enter sex (1=male, 2=female):\n");
      scanf("%d",&s);

        if (h==1 && a>=25 && a<=35 && l==1 && s==1) {
         printf("you are insured\n");
         printf("you'r premium rate is 4 rupees per thousand\n");
         printf("maximum policy amount is 2 lakh rupees\n");}
        else if (h==1 && a>=25 && a<=35 && l==1 && s==2) {
         printf("you are insured\n");
         printf("you'r premium rate is 3 rupees per thousand\n");
         printf("maximum policy amount is 1 lakh rupees\n");}
        else if (h==2 && a>=25 && a<=35 && l==2 && s==1) {
          printf("you are insured\n");
         printf("you'r premium rate is 6 rupees per thousand\n");
         printf("maximum policy amount is  10 thousand rupees\n");}
        else 
         printf("you are not insured\n");
    return 0;
}





/* 
A certain grade of steel is graded according to the following 
conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7 
(iii) Tensile strength must be greater than 5600 
The grades are as follows: 

Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met 

Write a program, which will require the user to give values of 
hardness, carbon content and tensile strength of the steel 
under consideration and output the grade of the steel. */




#include <stdio.h>  
  int main() 
{
 int h,t;
 float c;
    printf("Enter hardness\n");
    scanf("%d",&h);
    printf("Enter carbon content\n");
    scanf("%f",&c);
    printf("Enter tensile strength:\n");
    scanf("%d",&t);

       if (h>50 && c<0.7 && t>5600) {
         printf("grade 10\n");}
        else if (h>50 && c<0.7 && t<5600) {
         printf("grade 9\n");}
        else if (h<50 && c<0.7 && t>5600) {
         printf("grade 8\n");}
        else if (h>50 && c>0.7 && t>5600) {
         printf("grade 7\n");}
        else if (h<50 && c>0.7 && t>5600) {
         printf("grade 6\n");}
        else if (h<50 && c<0.7 && t<5600) {
         printf("grade 6\n");}
        else if (h>50 && c>0.7 && t<5600) {
         printf("grade 6\n");}
       else  if (h<50 && c>0.7 && t<5600) {
         printf("grade 5\n");} 
 return 0;
}

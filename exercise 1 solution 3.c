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
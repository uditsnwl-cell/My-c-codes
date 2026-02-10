





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
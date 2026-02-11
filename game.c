/* This is my firwst game i had ever made in c language the game looks like this :

Write a program for a matchstick game being played between 
the computer and a user. Your program should ensure that the 
computer always wins. Rules for the game are as follows: 
− There are 21 matchsticks. 
− The computer asks the player to pick 1, 2, 3, or 4 
matchsticks. 
− After the person picks, the computer does its 
picking. 
− Whoever is forced to pick up the last matchstick 
loses the game.*/



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
/*  Write a menu driven program which has following options:
 1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit 

Make use of switch statement.
The outline of this program is given below:
 A menu driven program 
main( )
{
 int choice ;
 while ( 1 )
 {
 printf ( "\n1. Factorial" ) ;
 printf ( "\n2. Prime" ) ;
 printf ( "\n3. Odd/Even" ) ;
 printf ( "\n4. Exit" ) ;
 printf ( "\nYour choice? " ) ;
 scanf ( "%d", &choice ) ;
 switch ( choice )
 {
 case 1 :
 logic for factorial of a number 
 break ;
 case 2 :
 logic for deciding prime number 
 break ;
 case 3 :
 logic for odd/even 
 break ;
 case 4 :
 exit( ) ;
 }
 }
} */



#include <stdio.h>
int main() {
    int choice, n, i, fact, flag;

    while (1) {
        printf("\n--- Menu ---");
        printf("\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nYour choice? ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Enter a number: ");
                scanf("%d", &n);
                fact = 1;
                for (i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("Factorial of %d = %d\n", n, fact);
                break;

            case 2: 
                printf("Enter a number: ");
                scanf("%d", &n);
                flag = 0;
                if (n <= 1) {
                    flag = 1; 
                } else {
                    for (i = 2; i <= n/2; i++) {
                        if (n % i == 0) {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag == 0)
                    printf("%d is Prime\n", n);
                else
                    printf("%d is Not Prime\n", n);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n % 2 == 0)
                    printf("%d is Even\n", n);
                else
                    printf("%d is Odd\n", n);
                break;

            case 4:
                printf("Exiting program... Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice, try again.\n");
                break;
        }
    }
    return 0;
}





/*Write a program which to find the grace marks for a student
using switch. The user should enter the class obtained by the
student and the number of subjects he has failed in.
− If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
If the number of subjects he failed in is less than or equal
to 3 then the grace is of 5 marks per subject.
− If the student gets second class and the number of subjects
he failed in is greater than 2, then he does not get any
grace. If the number of subjects he failed in is less than or
equal to 2 then the grace is of 4 marks per subject.
− If the student gets third class and the number of subjects
he failed in is greater than 1, then he does not get any
grace. If the number of subjects he failed in is equal to 1
then the grace is of 5 marks per subject */

#include <stdio.h>
int main() {

    int ch,f;
    printf("enter the number of classes you have attended (1-3):");
    scanf("%d",&ch);
        printf("enter the number of subjects you failed :");
    scanf("%d",&f);

    switch (ch)
    { case 1 :
        if (f>3)
          printf("no grace is provided");
       else if (f<=3)
         printf("you get grace of 5 marks per sbjest");

     break ;

     case 2 :
        if (f>2)
          printf("no grace is provided");
        else if (f<=2)
          printf("you get grace of 4 marks per sbjest");
      break ;

     case 3 :
        if (f>1)
         printf("no grace is provided");
        else if (f==1)
          printf("you get grace of 5 marks per sbjest");
     break ;

     default:
         printf("invalid input");
       }

 return 0;
}
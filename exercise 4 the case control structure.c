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
}



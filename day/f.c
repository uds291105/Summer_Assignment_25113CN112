#include <stdio.h>
int main()
{
    int number;
    printf("enter any number:");
    scanf ("%d", &number);
    int factorial =1 ;
    for ( int i=1; i<= number; i++){
        factorial = factorial *i;
    }
    printf ("factorial of this number is %d", factorial);
    return 0;
    
}
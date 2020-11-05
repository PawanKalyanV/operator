/* To set the bits from 2 to 10 of integer */

#include<stdio.h>

int main()
{
        int n=5, i=2;

         while ( i<=10 ) {

           n =  n | 1<<i ;

           i++;

         }
          printf( "%d\n", n );

}
~


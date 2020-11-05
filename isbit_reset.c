/* is bit reset at particular position  */

#include<stdio.h>

int isbit_reset (int *a,int pos)
{

        int j, k, true, false;

        if (pos) {

        j = pos/31;
        k = pos%31;

        if (( a[j] & (1<<k)) == 0 ){

        return true;
        }
        else {

        return false;
        }

        }
        printf ( "%d\n",a[j] );

}

int main()
{
        int a[10];
        isbit_reset (a,20);
}




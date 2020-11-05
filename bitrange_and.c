/* AND bits of range in array a and b and result stored in a */

#include<stdio.h>

int bitrange_and (int *a, int *b, int start_bit, int end_bit)
{
    int j, k;

    while (start_bit <= end_bit) {

    j = start_bit/31;
    k = start_bit%31;

    a[j] |= ((a[j] & (1<<k)) & (b[j] & (1<<k)));

    start_bit++;
    }
    printf ("%d\n",a[j]);

}

int main()
{
    int a[10], b[10];
    bitrange_and(a, b, 20, 40);
}



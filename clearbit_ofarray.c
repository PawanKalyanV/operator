/* clear the range of bits array of integers */

#include<stdio.h>

void setbit_range(int *a,int start_bit,int end_bit)
{

    int j, k;

    while(start_bit <= end_bit){

    j = start_bit/31;

    k = start_bit%31;

    a[j] = a[j] & ~(1<<k);

    start_bit++;

    }
    printf("%d\n",a[j]);
}

int main()
{
    int a[10];
    setbit_range(a,20,40);
}
~                                                                                                                                                                                                
~         


/* copy range of bits from source to destination */

#include<stdio.h>

int bitrange_copy(int *dst, int *src, int *exp, int start_bit, int end_bit)
{
    int j, k;

    while (start_bit <= end_bit) {

      j = start_bit/31;
      k = start_bit%31;

      if ((src[j] & (1<<k)) == 0) {
	
      dst[j] &= ~(1<<k);

      }
      else {
   
      dst[j] |= (1<<k);

      }

      start_bit++;
    }

      if (dst[j] == exp[j]) {

      printf("%d\n",dst[j]);
      printf("%d\n",exp[j]);
      }
}

int main()
{
    int a[10] = { 0x55555555,
	          0x55555555,
                  0x55555555,
                  0x55555555,
                  0x55555555,
                  0x55555555,
                  0x55555555,  
                  0x55555555,
                  0x55555555,
                  0x55555555 }

       ,b[10] = { 0xAAAAAAAA,
	          0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA,
                  0xAAAAAAAA
                             }

      ,exp[10] = {0xAAAA5555,
	          0x5555AAAA,
	          0x55555555,
		  0x55555555,
		  0x55555555,
		  0x55555555,
		  0x55555555,
		  0x55555555,
		  0x55555555,
		  0x55555555 };

    bitrange_copy(a, b, exp, 16, 47);
}


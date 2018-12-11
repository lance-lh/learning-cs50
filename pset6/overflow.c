// integer overflow

#include<stdio.h>
#include<unistd.h>


int main(void)
{
   // Iteratively double i
   for(int i = 1; ;i *= 2) // int 4 bytes, that is, 2^32 = 4G = 4294967296
   // but default int means signed int, that is, the first bit is to decide positive or
   // negative symbol
   // so, the range is actually from 0 to (2^31)-1 = 2147483647 that is INT_MAX
   // in contrary, INT_MIN is −2,147,483,648
   {
       printf("%i\n", i);
       sleep(1);
   }
}

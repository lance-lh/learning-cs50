#include<stdio.h>


void swap(int x, int y);

int main(void)
{
    int a = 1;
    int b = 2;

    printf("a is %i, b is %i\n",a,b);
    swap(a,b);
    printf("a is %i, b is %i\n",a,b);
}


void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;

}
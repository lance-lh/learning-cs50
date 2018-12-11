#include<stdio.h>


int main()
{
    int *x;
    int *y;

    x = malloc(sizeof(int));

    *x = 42;
   // *y = 24;

    y = x;

    *y = 13;

}
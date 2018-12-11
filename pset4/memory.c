#include<stdio.h>
#include<stdlib.h>  // the library contains malloc()

void f(void); // declaration

int main()
{
    f();
}

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[9] = 50;
    printf("You inputted %i.\n",x[9]);
    free(x);
}
#include<stdio.h>
#include<cs50.h>

int main()
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    printf("s: %p\n",s);
    printf("t: %p\n",t);
}
#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s==t)
    {
        printf("same\n");

    }
    else
    {
        printf("different\n");
    }
}

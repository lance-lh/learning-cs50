#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string s = get_string("Name: ");
    int n=0;

    do
    {
        n++;
    }
    while(s[n]!='\0');
    printf("The string length is %i\n",n);
}
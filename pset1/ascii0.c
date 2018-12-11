#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s = get_string("Name: ");

    for(int i=0;i<strlen(s);i++)
    {
        printf("%c\t%i\n",s[i],(int)s[i]);
    }
}
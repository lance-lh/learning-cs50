#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    char *s = get_string("string: ");
    if (!s)
    {
        return 1;
    }

    for(int i=0;i<strlen(s);i++)
    {
        printf("%c\n",*(s+i));
    }
}
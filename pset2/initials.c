#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char initials[4];
    int counter = 0;
    string s = get_string("Name: ");

    for (int i=0;i<strlen(s);i++)
    {
        if (isupper(s[i]))
        {
            initials[counter] = s[i];
            counter++;
        }
    }
    initials[counter] = '\0';
    printf("%s\n",initials);
}
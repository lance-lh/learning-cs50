#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    string s = get_string("input: ");   //to prompt user to input a string in the command window
    printf("outputs: ");

    for(int i=0;i<strlen(s);i++)
    {
        printf("%c\n",s[i]);
    }
    printf("\n");
}
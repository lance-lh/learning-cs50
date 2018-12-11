#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    int answer = strcmp(s,t);
    printf("answer is %i\n",answer);

   // if (s==t)
   if (answer==0)
    {
        printf("same\n");

    }
    else
    {
        printf("different\n");
    }
}

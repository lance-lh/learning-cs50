#include<stdio.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

int main(void)
{
    string s = get_string("s: ");

    if (!s)
    {
        return 1;
    }

    char *t = malloc((strlen(s)+1)*sizeof(char));

    if (!t)
    {
        return 1;
    }

    for (int i=0;i<=strlen(s);i++)
    {
        t[i] = s[i];
    }

    if (strlen(t)>0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n",s);
    printf("t: %s\n",t);

    free(t);
    return 0;
}

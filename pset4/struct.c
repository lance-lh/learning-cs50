
#include<stdio.h>
#include<string.h>
#include<cs50.h>

#include "struct.h"

int main(void)
{
    int enrollment = get_int("enrollment: ");
    student students[enrollment];

    for (int i=0;i<enrollment;i++)
    {
        students[i].name = get_string("name: ");
        students[i].dorm = get_string("dorm: ");

    }

    for (int i=0;i<enrollment;i++)
    {
        printf("%s is in %s.\n", students[i].name,students[i].dorm);
    }
}

#include<stdio.h>
#include<string.h>
#include<cs50.h>

#include "struct.h"

int main(void)
{
    int enrollment = get_int("enrollment: ");
    student students[enrollment];s

    for (int i=0;i<enrollment;i++)
    {
        students[i].name = get_string("name: ");
        students[i].dorm = get_string("dorm: ");
        
    }

    FILE *file = fopen("students.csv","w");
    if (file)
    {
        for (int i=0;i<enrollment;i++)
        {
            fprintf(file, "%s,%s\n",students[i].name, students[i].dorm);
        }
        fclose(file);
    }
}
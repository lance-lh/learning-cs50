// Implement a list of numbers using a linked list

#include<cs50.h>
#include<stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main()
{
    // Memory for numbers
    node *numbers = NULL;

    // Prompt for numbers (until EOF)
    while(true)
    {
        // Prompt for number
        int number = get_int("Number: ");

        // Check for EOF
        if(number == INT_MAX)
        {
            break;
        }

        // Allocate space for number
        node *n = malloc(sizeof(node));
        if(!n) //if PC is out of memory, then malloc fails
        {
            return 1;
        }

        // Add number to list
        n->number = number;  // (*n).number, n is a pointer
        n->next = NULL;
        if(numbers) // error check, if(numbers!=NULL)
        {
            for(node *ptr = numbers; ptr!= NULL; ptr = ptr->next)
            {
                if(ptr->next == NULL) // if(!ptr->next), update ptr = ptr->next
                {
                    ptr->next = n;
                    break;
                }
            }
        }
        else
        {
            numbers = n;
        }
    }
}
#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int *numbers = NULL;  //define an empty array
    int capacity = 0;  // how much space there is in total

    int size = 0;  // how much space we are using
    while(true) // store number in the array numbers
    // realloc memory for array numbers
    {
        int number = get_int("Number: ");

        if(number == INT_MAX)  //ctrl+D, break out of this loop
        {
            break;
        }

        if(size == capacity)
        {
            // whatever the current size of the array is, I clearly need one more space.
            // repeat once and once
            numbers = realloc(numbers,sizeof(int)*(size + 1));
            capacity++;
        }

        numbers[size] = number;
        size++;

    }

    for(int i = 0; i < size; i++) // after ending the input, output msg
    {
        printf("You inputted %i\n", numbers[i]);
    }

    free(numbers);
}
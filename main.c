#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUBBLE_SORT 1

int main(int argc, char *argv[])
{
    u_int16_t selected_function = 0;
    int32_t* array              = NULL;
    size_t array_size           = 0;
    u_int16_t argv_index        = 0;

    for(argv_index = 0; argv_index < argc; argv_index++)
    {
        if(strcmp(argv[argv_index], "-f") == 0)
        {
            selected_function = BUBBLE_SORT;
            
            // Remaining arguments after "-f" are the integers
            argv_index++; // move to the first number
            array_size = argc - argv_index;
            break;
        }
    }

    if (array_size == 0)
    {
        fprintf(stderr, "No numbers provided after -f\n");
        return 1;
    }

    array = malloc(array_size * sizeof(int32_t));
    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for(u_int16_t i = 0; i < array_size; i++)
    {
        array[i] = atoi(argv[argv_index + i]);
    }

    switch (selected_function)
    {
        case BUBBLE_SORT:
            for(u_int32_t i = 0; i < array_size; i++)
            {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        
        default:
            break;
    }

    free(array);
    return 0;
}

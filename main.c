#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"
#include "selection_sort.h"
#include "typedef.h"

#define BUBBLE_SORT 1
#define SELECTION_SORT 2

int main(int argc, char *argv[])
{
    arrayConfig_t my_array;
    u_int16_t selected_function = 0;
    u_int16_t argv_index        = 0;

    for(argv_index = 1; argv_index < argc; argv_index++)
    {
        if(strcmp(argv[argv_index], "--bubble_sort") == 0)
        {
            selected_function = BUBBLE_SORT;
            break;
        }
        else if(strcmp(argv[argv_index], "--selection_sort") == 0)
        {
            selected_function = SELECTION_SORT;
            break;
        }
        else
        {
            printf("Wrong input");
        }
    }
    // Remaining arguments after the type of sort selected are the integers
    argv_index++; // move to the first number
    my_array.array_size = argc - argv_index;

    if (my_array.array_size == 0)
    {
        fprintf(stderr, "No numbers provided after -f\n");
        return 1;
    }

    my_array.array = malloc(my_array.array_size * sizeof(int32_t));
    if (my_array.array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for(u_int16_t i = 0; i < my_array.array_size; i++)
    {
        my_array.array[i] = atoi(argv[argv_index + i]);
    }

    switch (selected_function)
    {
        case BUBBLE_SORT:
            bubble_sort(my_array);

            printf("Sorted array:\n");
            for(u_int32_t i = 0; i < my_array.array_size; i++)
            {
                printf("%d ", my_array.array[i]);
            }
            printf("\n");
            break;
        case SELECTION_SORT:
            selection_sort(my_array);

            printf("Sorted array:\n");
            for(u_int32_t i = 0; i < my_array.array_size; i++)
            {
                printf("%d ", my_array.array[i]);
            }
            printf("\n");
            break;
        
        default:
            break;
    }

    free(my_array.array);
    return 0;
}

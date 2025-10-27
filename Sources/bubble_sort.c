#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "bubble_sort.h"

void bubble_sort(arrayConfig_t my_array)
{
    printf("Sorting array:\n");
    for(uint32_t i = 0; i < (my_array.array_size - 1); i++)
    {
        for(uint32_t j = 0; j < (my_array.array_size - 1 - i); j++)
        {
            if(my_array.array[j] > my_array.array[j + 1])
            {
                uint32_t aux = my_array.array[j];
                my_array.array[j] = my_array.array[j + 1];
                my_array.array[j + 1] = aux;
            }
            printf("\r[");
            for(uint32_t k = 0; k < my_array.array_size; k++)
            {
                printf("%d ", my_array.array[k]);
            }
            printf("]");
            fflush(stdout);
            usleep(75000);
        }
    }
    printf("\n");
}
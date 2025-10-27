#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "selection_sort.h"

void selection_sort(arrayConfig_t my_array)
{
    printf("Sorting array:");
    for(uint32_t i = 0; i < my_array.array_size; i++)
    {
        for(uint32_t j = i; j < my_array.array_size; j++)
        {
            if(my_array.array[i] > my_array.array[j])
            {
                uint32_t aux = my_array.array[i];
                my_array.array[i] = my_array.array[j];
                my_array.array[j] = aux;
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
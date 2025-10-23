#include <stdio.h>
#include "bubble_sort.h"

void bubble_sort(arrayConfig_t my_array)
{
    for(u_int32_t i = 0; i < (my_array.array_size - 1); i++)
    {
        for(u_int32_t j = 0; j < (my_array.array_size - 1 - i); j++)
        {
            if(my_array.array[j] > my_array.array[j + 1])
            {
                u_int32_t aux = my_array.array[j];
                my_array.array[j] = my_array.array[j + 1];
                my_array.array[j + 1] = aux;
            }
        }
    }
}
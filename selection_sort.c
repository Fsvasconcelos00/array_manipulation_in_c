#include <stdio.h>
#include "selection_sort.h"

void selection_sort(arrayConfig_t my_array)
{
    for(u_int32_t i = 0; i < my_array.array_size; i++)
    {
        for(u_int32_t j = i; j < my_array.array_size; j++)
        {
            if(my_array.array[i] > my_array.array[j])
            {
                u_int32_t aux = my_array.array[i];
                my_array.array[i] = my_array.array[j];
                my_array.array[j] = aux;
            }
        }
    }
}
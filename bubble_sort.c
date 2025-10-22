#include <stdio.h>
#include "bubble_sort.h"

void bubble_sort(int32_t* array, size_t array_size)
{
    for(u_int32_t i = 0; i < (array_size - 1); i++)
    {
        for(u_int32_t j = 0; j < (array_size - 1 - i); j++)
        {
            if(array[j] > array[j + 1])
            {
                u_int32_t aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}
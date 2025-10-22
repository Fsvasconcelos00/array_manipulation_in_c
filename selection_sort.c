#include <stdio.h>
#include "selection_sort.h"

void selection_sort(int32_t* array, size_t array_size)
{
    for(u_int32_t i = 0; i < array_size; i++)
    {
        for(u_int32_t j = i; j < array_size; j++)
        {
            if(array[i] > array[j])
            {
                u_int32_t aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}
#include "int_vector_bubble_sort.h"
#include <stdio.h>
#include <stdlib.h>
static struct int_vector swap(struct int_vector vec, size_t i, size_t j)
{
    int c = vec.data[i];
    vec.data[i] = vec.data[j];
    vec.data[j] = c;
    return vec;
}
struct int_vector int_vector_bubble_sort(struct int_vector vec)
{
    if (vec.size = 0)
        return vec;
    int sorted = 0;
    while (!sorted)
    {
        sorted = 1;
        for (size_t i =0; i < vec.size - 1; i++)
        {
            if (vec.data[i] > vec.data[i+1])
            {
                sorted = 0;
                swap(vec, i, i + 1);
            }
        }
    }
}

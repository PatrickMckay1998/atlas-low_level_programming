#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t mid;
    size_t i;

    if (array == NULL)
    {
        return (-1);
    }

    while (left <= right)
    {
        printf("searching in array: ");
        for (i = left; i <= right; i++)
        {   
            printf("%d", array[i]);

            if (i < right)
            {
                printf(", ");
            }
        }

        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value)
        {
            return(mid);
        }

        if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }

        return (-1);

    }
    return (0);
}
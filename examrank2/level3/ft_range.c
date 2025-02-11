#include <stdlib.h>

int ft_abs(int i)
{
    if (i < 0)
        i *= -1;
    return (i);
}


int     *ft_range(int start, int end)
{
    int i;
    int size;
    int *array;

    i = 0;
    size = ft_abs(end - start) + 1;
    array = malloc(sizeof(int) * size);
    if (!array)
        return (NULL);
    
    if (start < end)
    {
        while (i < size)
        {
            array[i] = start;
            start++;
            i++;
        }
    }
    else if(start > end)
    {
        while(i < size)
        {
            array[i] = start;
            start--;
            i++;
        }
    }
    return (array);
}


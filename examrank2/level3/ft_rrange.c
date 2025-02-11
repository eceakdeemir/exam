#include <stdlib.h>

int ft_abs(int num)
{
    if (num < 0)
        return (-num);
    return (num);
}

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int range = ft_abs(end - start);
    int *array = (int *)malloc(sizeof(int) * (range + 1));
    if(!array)
        return (NULL);
    int adim;

    if (end > start)
        adim = -1;
    else
        adim = 1;
    while (i <= range)
    {
        array[i] = end;
        end += adim;
        i++;
    }
    return (array);
}
#include <stdio.h>
int main()
{
    int *array = ft_rrange(-5,4);

    printf("%d %d %d %d %d %d %d %d %d %d", array[0],array[1],array[2],array[3],array[4],array[5],array[6],array[7], array[8], array[9]);
}
#include <unistd.h>

int		max(int *tab, unsigned int len)
{
    int maxi;
    maxi = 0;
    unsigned int i;
    i = 0;
    while (i < len)
    {
        if (tab[i] > maxi)
            maxi = tab[i];
        i++;
    }
    return maxi;
}
#include <stdio.h>
int main()
{
    int a[5] = {};
    printf("%d", max(a, 5));
}
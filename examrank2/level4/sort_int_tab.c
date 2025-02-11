#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int j = 0;
    int tmp;
    if (size < 1)
        return ;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}
#include <stdio.h>
int main()
{
    int tab[] = {5,4,4,3,2};
    sort_int_tab(tab, 5);
    printf("%d %d %d %d %d", tab[0],tab[1],tab[2],tab[3],tab[4]);
}
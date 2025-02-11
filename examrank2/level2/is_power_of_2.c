

int is_power_of_2(unsigned int n)
{
    unsigned int i;
    i = 1;
    while (i <= n)
    {
        if (i == n && i != 1)
            return 1;
        i *= 2;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("%d", is_power_of_2(16));
}
#include <stdlib.h>
#include <stdio.h>

int len_nbr(int nbr)
{
    int i;
    i = 0;
    if (nbr == 0)
        return (1);
    if (nbr < 0)
    {
        i++;
        nbr *= -1;
    }
    while (nbr > 0)
    {
        i++;
        nbr /= 10;
    }
    return (i);
}


char *ft_itoa(int nbr)
{
    int len = len_nbr(nbr);
    long number;
    number = nbr;
    char *str;

    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (number == 0)
        str[0] = '0';
    else
    {
        if (number < 0)
        {
            str[0] = '-';
            number *= -1;
        }
        len--;
        while (number > 0)
        {
            str[len] = number % 10 + '0';
            number /= 10;
            len--;
        }
    }
    return(str);
}

int main()
{
    printf("%s", ft_itoa(0));
}

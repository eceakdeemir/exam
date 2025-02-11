#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    i = 0;
    int result;
    int sign;
    sign = 1;
    result = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] && (str[i] >= 48 && str[i] <= 57))
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    return (result * sign);
}
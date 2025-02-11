
#include <unistd.h>


int	ft_atoi_base(const char *str, int str_base)
{
    int result;
    int sign;
    sign = 1;
    result = 0;

    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    while(*str)
    {
        result *= str_base;
        if (*str >= '0' && *str <= '9')
        {
            if ((*str - '0') >= str_base)
                return 0;
            result += (*str - '0');
        }
        else if (*str >= 'A' && *str <= 'F')
        {
            if ((*str - 'A') >= str_base)
                return 0;
            result += (*str - 'A' + 10);
        }
        else if (*str >= 'a' && *str <= 'f')
        {
            if ((*str - 'a') >= str_base)
                return 0;
            result += (*str - 'a' + 10);
        }
        str++;
    }
    return (result * sign);
}



#include <stdio.h>

int main()
{
    printf("%d",(ft_atoi_base("-A3", 16)));
}


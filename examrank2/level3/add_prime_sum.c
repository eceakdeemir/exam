#include <unistd.h>


int ft_atoi(char *str)
{
    int i;
    i = 0;
    int res;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res = res + str[i] - 48;
        i++;
    }
    return res;
}
int is_prime(int i)
{
    int j = 2;
    while (j < i)
    {
        if (i % j == 0)
            return 0;
        j++;
    }
    return 1;
}

void ft_putnbr(int i)
{
    char c;
    if (i > 9)
        ft_putnbr(i / 10);
    c = (i % 10) + '0';
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    int total = 0;
    i = 2;
    if (ac != 2 || av[1][0] == '-')
        write(1, "0\n", 2);
    else
    {
        while (i <= ft_atoi(av[1]))
        {
            if (is_prime(i))
                total += i;
            i++;
        }
        ft_putnbr(total);
        write(1, "\n", 1);
    }
}
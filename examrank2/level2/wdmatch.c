#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int ac, char **av)
{
    if (ac != 3)
        write(1, "\n", 1);

    else
    {
        int len1 = ft_strlen(av[1]);
        int last = 0;
        int i;
        i = 0;
        int j = 0;
        while (av[1][i])
        {
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    last += 1;
                    break;
                }
                j++;
            }
            i++;
        }
        if (len1 == last)
        {
            i = 0;
            while(av[1][i])
            {
                write(1, &av[1][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
    }
}
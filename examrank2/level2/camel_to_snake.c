#include <unistd.h>

int ft_upper(char a)
{
    if (a >= 65 && a <= 90)
        return(1);
    else
        return(0);
}


int main(int ac, char **av)
{
    int i;
    i = 0;
    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        while (av[1][i])
        {
            if (ft_upper(av[1][i + 1]) == 1)
            {
                write(1, &av[1][i], 1);
                write(1, "_", 1);
            }
            else
                write(1,&av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
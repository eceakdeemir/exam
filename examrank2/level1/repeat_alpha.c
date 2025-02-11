#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int num;
    num = 0;
    i = 0;
    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        while (av[1][i] != '\0')
        {
            if (av[1][i] >= 65 && av[1][i] <= 90)
                num = av[1][i] - 64;
            else if (av[1][i] >= 97 && av[1][i] <= 122)
                num = av[1][i] - 96;
            while (num > 0)
            {
                write(1, &av[1][i], 1);
                num--;
            }
            if (!((av[1][i] >= 65 && av[1][i] <= 90) || (av[1][i] >= 97 && av[1][i] <= 122)))
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
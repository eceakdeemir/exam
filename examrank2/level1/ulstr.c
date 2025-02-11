#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;
    char a;
    if (ac != 2)
        write(1, "\n", 1);
    else
    {
        while(av[1][i] != '\0')
        {
            if (av[1][i] >= 65 && av[1][i] <= 90)
            {
                a = av[1][i] + 32;
                write(1, &a, 1);
            }
            else if (av[1][i] >= 97 && av[1][i] <= 122)
            {
                a = av[1][i] - 32;
                write(1, &a, 1);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
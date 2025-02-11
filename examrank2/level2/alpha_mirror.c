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
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                a = 'z' - (av[1][i] - 'a');
                write(1, &a, 1);
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                a = 'Z' - (av[1][i] - 'A');
                write(1, &a, 1);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 0;
    if (ac != 4)
        write(1, "\n", 1);
    else
    {
        while(av[1][i] != '\0')
        {

            if (av[1][i] == av[2][0] && av[2][1] == '\0')
                write(1, &av[3][0], 1);
            else
                write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}
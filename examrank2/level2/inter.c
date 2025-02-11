#include <stdio.h>
#include <unistd.h>
int check(char *str, char c, int i)
{
    int x;
    x = 0;
    while (x < i)
    {
        if (str[x] == c)
            return 0;
        x++;
    }
    return 1;
}

int main(int ac, char **av)
{
    int i;
    int j;
    j = 0;
    i = 0;
    if(ac != 3)
        write(1,"\n", 1);
    else
    {
        while (av[1][i] != '\0')
        {
            j = 0;
            while (av[2][j] != '\0')
            {
                if ((av[1][i] == av[2][j]) && (check(av[1], av[1][i], i) == 1))
                {
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
    }
}
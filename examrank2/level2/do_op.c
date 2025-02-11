#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int num1;
    int num2;
    if (ac != 4)
        write(1, "\n", 1);
    else
    {
        num1 = atoi(av[1]);
        num2 = atoi(av[3]);
        if (av[2][0] == '-')
            printf("%d\n", num1 - num2);
        else if (av[2][0] == '*')
            printf("%d\n", num1 * num2);
        else if (av[2][0] == '+')
            printf("%d\n", num1 + num2);
        else if (av[2][0] == '/')
            printf("%d\n", num1 / num2);
    }
}

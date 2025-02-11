#include <unistd.h>

void ft_putchar(int i)
{
    write(1,&i, sizeof(i));
}

void ftputnbr(int i)
{
    if (i > 9)
    {
        ftputnbr(i / 10);
        ftputnbr(i % 10);
    }
    else
        ft_putchar(i + 48);
}

int main()
{
    int i;
    i = 0;
    while (i <= 100)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
        {
            ftputnbr(i);
        }
        i++;
        write(1, "\n", 1);
    }
}

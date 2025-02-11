#include <stdlib.h>
#include <stdio.h>

void ft_prime(int number)
{
    int prime;
    prime = 2;
    if (number == 1)
    {
        printf("1");
        return ;
    }
    while(prime <= number)
    {
        if (number % prime == 0)
        {
            printf("%d", prime);
            if (prime != number)
                printf("*");
            number /= prime;
        }
    }
}


int main(int ac, char **av)
{
    if(ac == 2)
        ft_prime(atoi(av[1]));
    printf("\n");
}
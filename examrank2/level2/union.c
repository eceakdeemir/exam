#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strcat(char *s1, char *s2)
{
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s1);
    char *a;
    a = malloc(len1 + len2 + 1);
    if (!a)
        return (NULL);
    int i = 0;
    int j = 0;
    while(s1[i])
    {
        a[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        a[i] = s2[j];
        i++;
        j++;
    }
    a[i] = '\0';
    return a;
}

int check (char *a, int c, int i)
{
    int x = 0;
    while (x < i)
    {
        if (a[x] == c)
            return 0;
        x++;
    }
    return 1;
}

int main(int ac, char **av)
{
    int i;
    i = 0;
    char *a;
    if(ac != 3)
        write(1, "\n", 1);
    else
    {
        a = ft_strcat(av[1], av[2]);
        while (a[i])
        {
            if (check(a, a[i], i) == 1)
                write(1, &a[i], 1);
            i++;
        }
    }
}
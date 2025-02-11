#include <stdio.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int i;
    int len;
    char tmp;
    tmp = 0;
    len = ft_strlen(str) - 1;
    i = 0;
    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}

int main()
{
    char a[] = "ece akdem.  ir";
    printf("%s", ft_strrev(a));
}
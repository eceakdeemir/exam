#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *s1)
{
    int i;
    i = 0;
    while (s1[i])
        i++;
    return i;
}

char *ft_strdup(const char *s1)
{
    int len;
    char *str;
    int i;
    i = 0;
    len = ft_strlen(s1);
    str = malloc((len * sizeof(char)) + 1);
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return str;
}
int main()
{
    char *a = "ece. ";
    printf("%s",ft_strdup(a));
}
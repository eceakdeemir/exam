#include <string.h>
#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(*s == c)
            return ((char *)s);
        s++;
    }
    return (NULL);
}

char *ft_strpbrk(const char *s, const char *charset)
{
    int i;
    i = 0;
    while (charset[i])
    {
        if(ft_strchr(s, charset[i]))
            return (ft_strchr(s, charset[i]));
        i++;
    }
    return (NULL);
}
#include <stdio.h>
int main()
{
    char *a = "eceiakdemr,e";
    printf("%s", ft_strpbrk(a, ""));
}
#include <stdio.h>
#include <string.h>

int ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    if (i == 0 && s[i] == c)
        return -1;
    while (s[i])
    {
        if (s[i] == c)
            return (i);
        i++;
    }
    return 0;
}

size_t ft_strcspn(const char *s, const char *charset)
{
    int i;
    int j;
    j = 0;
    i = 0;
    int a;
    a = 0;
    while (charset[i])
    {
        a = ft_strchr(s, charset[i]);
        if (a != 0 && a != -1)
            return a;
        else if (a == -1)
            return 0;
        else
            return a;
        i++;
    }
    return 0;
}
int main()
{
    char *a = "cs,akdemir";
    printf("%zu\n", ft_strcspn(a, ""));
    printf("%zu\n", strcspn(a, ""));
}
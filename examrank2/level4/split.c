#include <stdio.h>
#include <stdlib.h>
/*
int ft_free(char **str, int word_count)
{
    int strc;
    strc = 0;

    while(strc < word_count)
    {
        free(str[strc]);
        strc++;
    }
    free(str);
    return (1);
}

int count_words(char *str)
{
    int i = 0;
    int count= 0;
    int word = 0;

    while (str[i])
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            if (word == 0)
            {
                word = 1;
                count++;
            }
        }
        else
            word = 0;
        i++;
    }
    return (count);
}
char *substr(char *s, int start, int len)
{
    char *str;
    int i = 0;
    str = malloc(sizeof(char) * len + 1);
    if(!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s[i + start];
        i++;
    }
    str[i] = '\0';
    return (str);
}*/
/*
int appender(char **str, char *s, int word_count)
{
    int i = 0;
    int strc = 0;
    int start = 0;

    while (strc < word_count)
    {
        if ((s[i] != ' ' && s[i] != '\t' && s[i] != '\n') && i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
            start = i;
        if (((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && (s[i - 1] != ' ' || s[i - 1] != '\t' || s[i - 1] != '\n')) || s[i] == '\0')
        {
            str[strc] = substr(s, start, i - start);
            if (!str[strc])
                return(ft_free(str, strc));
            while (s[i] && s[i + 1] != '\0' && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\n'))
                i++;
            strc++;
        }
        i++;
    }
    return (0);
}

char    **ft_split(char *str)
{
    char **new_str;
    int word_count = count_words(str);
    new_str = (char **)malloc(sizeof(char *) * (word_count + 1));
    if(!new_str)
        ft_free(new_str, word_count);
    new_str[word_count] = NULL;
    if(appender(new_str, str, word_count) == 1)
        return NULL;
    return (new_str);
}*/
/*
int main()
{
    char *str;
    char **new;
    int i = 0;
    str = "ece akdemir      slv.         efle";
    new = ft_split(str);
    while (i < 5)
    {
        printf("%s\n", new[i]);
        i++;
    }
}*/

int ft_free(char **s, int word_count)
{
    int i;
    i = 0;
    while (i < word_count)
    {
        free(s[i]);
        i++;
    }
    free(s);
    return 1;
}

char *substr(char *s, int start, int len)
{
    int i = 0;
    char *str;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len)
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int word_count(char *s)
{
    int i = 0;
    int word = 0;
    int count = 0;

    while (s[i])
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            if(word == 0)
            {
                word = 1;
                count++;
            }
        }
        else
            word = 0;
        i++;
    }
    return (count);
}
int appender(char **str, char *s, int word_count)
{
    int i = 0;
    int strc = 0;
    int start = 0;

    while (strc < word_count)
    {
        if((s[i] != ' ' && s[i] != '\t' && s[i] != '\n') && i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'))
            start = i;
        if (((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && i > 0 && (s[i - 1] != ' ' && s[i - 1] != '\t' && s[i - 1] != '\n')) || s[i] == '\0')
        {
            str[strc] = substr(s, start, i - start);
            if(!str[strc])
                ft_free(str, strc);
            strc++;
            while ((s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\n') && s[i + 1] != '\0')
                i++;
        }
        i++;
    }
    return 0;
}


char    **ft_split(char *str)
{
    int count = word_count(str);
    char **str2;
    str2 = (char **)malloc(sizeof(char *) * (count + 1));
    if (!str2)
        ft_free(str2, count);
    str2[count] = NULL;
    if(appender(str2,str,count) == 1)
        return NULL;
    return str2;
}

#include <stdio.h>

int main()
{
   char *str;
    char **new;
    int i = 0;
    str = "ece akdemir      slv.         efle";
    new = ft_split(str);
    while (i < 4)
    {
        printf("%s\n", new[i]);
        i++;
    }
}
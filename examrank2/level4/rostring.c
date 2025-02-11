#include <unistd.h>

int	is_space(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	return (0);
}

void	ft_print_first_word(char *str, int begin_space)
{
	while (str[begin_space] != '\0' && !is_space(str[begin_space]))
	{
		write(1, &str[begin_space], 1);
		begin_space++;
	}
}

void rostring(char *str)
{
    int index;
    int begin_space = 0;
    while (str[begin_space] != '\0' && is_space(str[begin_space]))
        begin_space++;
    index = begin_space;
    while (str[index] && !(is_space(str[index])))
        index++;
    while (str[index])
    {
        if (str[index] != '\0' && !is_space(str[index]) && is_space(str[index - 1]))
        {
            while (str[index] && !is_space(str[index]))
            {
                write(1, &str[index], 1);
                index++;
            }
            write(1, " ", 1);
        }
        index++;
    }
    ft_print_first_word(str, begin_space);
}

int main(int ac, char **av)
{
    if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}


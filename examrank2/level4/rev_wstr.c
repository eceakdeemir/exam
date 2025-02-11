#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	rev_wstr(char *str)
{

int index = 0;
int start;
int end;
int word = 1;

while (str[index])
    index++;
index--;
while (index >= 0)
{
    while (index >= 0 && (str[index] == ' ' || str[index] == '\t'))
        index--;
    end = index;
    while (index >= 0 && (str[index] != ' ' && str[index] != '\t'))
        index--;
    start = index + 1;
    if (word == 0)
        write(1, " ", 1);
    write(1, &str[start], end - start + 1);
    word = 0;
}
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_wstr(argv[1]);
    write(1, "\n", 1);
    return 0;
}
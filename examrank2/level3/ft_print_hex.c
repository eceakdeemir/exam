#include <unistd.h>

int min_atoi(char *str)
{
    int i;
    int result;
    int sign;
    i = 0;
    result = 0;
    sign = 1;

    while (str[i])
    {
        result *= 10;
        result = result + str[i] - '0';
        i++;
    }
    return (result);
}
void print_hex(int num)
{
    
    char *hex_base = "0123456789abcdef";
    if (num >= 16)
        print_hex(num / 16);
     write(1, &hex_base[num % 16], 1);
 }



int main(int ac, char **av)
{
    if(ac != 2)
        write(1, "\n", 1);
    else
    {
        int num = min_atoi(av[1]);
        print_hex(num);
        write(1, "\n", 1);
    }
}






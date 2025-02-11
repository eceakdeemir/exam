#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    i = 7;

    unsigned char reversed = 0;
    while (i >= 0)
    {
        reversed <<= 1;
        reversed |= (octet & 1);
        octet >>= 1;
        i--;
    }
    return reversed;
}

void print_bits(unsigned char octet)
{
    int i;
    i = 7;
    while (i >= 0)
    {
        if(octet & (1 << i))
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}
#include <stdio.h>
int main()
{
    unsigned char octet = 2;
    print_bits(reverse_bits(octet));  // Expected output: 00000010
    return 0;
}

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char reversed = 0;
    int i = 7;
    while (i >= 0)
    {
        reversed <<= 1;
        reversed |= (octet & 1);
        octet >>= 1;
        i--;
    }
    return (reversed);
}
void print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0)
    {
        if (octet & (1 << i))
            write(1, '1', 1);
        else
            write(1, '0', 1);
        i--;
    }
}
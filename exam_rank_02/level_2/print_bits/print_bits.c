#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int i = 7;
    unsigned char bits;
    while (i >= 0)
    {
        bits = ((octet >> i) & 1) + '0';
        write(1,&bits,1);
        i--;
    }
}

    int main(void)
{
    print_bits(255);
}
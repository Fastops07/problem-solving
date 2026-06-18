unsigned char power (int exposant)
{
    unsigned char res = 1;
    while (exposant > 0)
    {
        res *=2;
        exposant--;
    }
    return res;
}

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 7;
    unsigned char curr;
    unsigned char res = 0;

    while(i >= 0)
    {
        curr = (octet >> i) & 1;
        res = res + (curr * (power(7 - i)));
        i--;
    }
    return (res);
}
// Ici version de chat mais trop complique je crois
// En dessus la version d au dessus avec des writes
/*
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int				i;

	res = 0;
	i = 8;
	while (i > 0)
	{
		res = res << 1;
		res = res | (octet & 1);
		octet = octet >> 1;
		i--;
	}
	return (res);
}
On prend le bit de droite de octet.
On l’ajoute à droite de res.
On décale res vers la gauche à chaque tour.
On répète 8 fois.
*/

/*
#include <stdio.h>
#include <unistd.h>
unsigned char power (int exposant)
{
    unsigned char res = 1;
    while (exposant > 0)
    {
        res *=2;
        exposant--;
    }
    return res;
}

void write_bits(unsigned char octet)
{
    int i = 7;
    unsigned char curr;
    while(i >= 0)
    {
        curr = ((octet >> i) & 1) + '0';
        write(1,&curr,1);
        i--;
    }
    write(1,"\n",1);
}


unsigned char	reverse_bits(unsigned char octet)
{
    int i = 7;
    unsigned char curr;
    unsigned char res = 0;
    write_bits(octet);

    while(i >= 0)
    {
        curr = ((octet >> i) & 1);
        res = res + (curr *(power(7 - i)));
        i--;
        // printf("%d\n", res);
    }
    write_bits(res);
    return (res);
}

int main()
{
    reverse_bits(1);
}
*/
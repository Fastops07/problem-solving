#include <unistd.h>
int is_triple(int nb)
{
	return nb % 3 == 0;
}

int is_five(int nb)
{
	return nb % 5 == 0;
}

int is_both(int nb)
{
	return is_five(nb) && is_triple(nb);
}

void put_nbr(int nb)
{
	if(nb > 9)
		put_nbr(nb / 10);
	char c = nb % 10 + '0';
	write(1, &c,1);
}


int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if(is_both(i))
		{
			write(1,"fizzbuzz",8);
		}
		else if(is_five(i))
		{
			write(1,"buzz",4);
		}
		else if(is_triple(i))
		{
			write(1,"fizz",4);
		}
		else
		{
			put_nbr(i);
		}
		write(1,"\n",1);
		i++;
	}
}
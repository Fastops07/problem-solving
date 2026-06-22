#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}

void put_nl()
{
	write(1,"\n",1);
}

int is_space(char c)
{
	return ((c >= 9 && c  <= 13) || c == ' ');
}

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

void print_n(char *str, int start, int end)
{
	int i = start;

	while (i <= end)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		put_nl();
		return 0;
	}

	char *str = argv[1];
	int first_word = 1;
	int i = ft_strlen(str) - 1;
	int start;
	int end;

	while(i >= 0)
	{
		while(i >= 0 && is_space(str[i]))
			i--;
		if(i < 0)
			break;
		end = i;
		while(i >= 0 && !(is_space(str[i])))
		i--;
		start = i + 1;
		if(!first_word)
			ft_putchar(' ');
		first_word = 0;
		print_n(str, start, end);
	}
	put_nl();
	return 0;
}

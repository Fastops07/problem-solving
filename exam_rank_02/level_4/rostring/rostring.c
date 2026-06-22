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
	return ((c >= 9 && c <= 13) || c == ' ');
}

void print_n(char *str, int start, int end)
{
	int i = start;
	while(i <= end)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc < 2)
	{put_nl();return 0;}

	char *str = argv[1];
	int i = 0;

	int is_first = 1;
	int already_print = 0;
	int start;
	int end;

	while(str[i])
	{
		while(str[i] && is_space(str[i]))
			i++;

		if(!str[i])
			break;

		if(is_first)
		{
			is_first = 0;			
			start = i;
			
			while(str[i] && !(is_space(str[i])))
				i++;
			end = i - 1;
		}
		if(already_print)
			ft_putchar(' ');
		while(str[i] && !(is_space(str[i])))
		{
			ft_putchar(str[i]);
			i++;
			already_print = 1;
		}
	}

	if(!is_first)
	{
		if(already_print)
			ft_putchar(' ');
		print_n(str, start,end);
	}
	put_nl();
	return 0;
}

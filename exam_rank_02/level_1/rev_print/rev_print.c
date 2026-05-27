#include <unistd.h>

void	print_nl(void)
{
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		end_of_word;

	if (argc != 2)
	{
		print_nl();
		return (0);
	}
	str = argv[1];
	end_of_word = ft_strlen(str) - 1;
	while (end_of_word >= 0)
	{
		write(1, &str[end_of_word], 1);
		end_of_word--;
	}
	print_nl();
	return (0);
}
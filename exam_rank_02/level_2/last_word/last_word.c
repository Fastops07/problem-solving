#include <unistd.h>

void put_nl(void)
{
    write(1, "\n", 1);
}
int is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void put_str(char *str)
{
    int i = 0;
    while (str[i])
    {
        char curr = str[i];
        write(1,&curr,1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {

        put_nl();
        return (0);
    }

    char *str = argv[1];
    int str_end = ft_strlen(str) - 1;
    while (str_end >= 0 && is_space(str[str_end]))
        str_end--;
    if(str_end < 0)
    {
        put_nl();
        return 0;
    }
    int word_end = str_end + 1;
    while(str_end >= 0 && !is_space(str[str_end]))
        str_end--;
    int word_start = str_end + 1;
    int length = word_end - word_start;

    int i = 0;
    while (i < length)
    {
        char curr = str[word_start + i];
        write(1,&curr,1);
        i++; 
    }
    put_nl();
    return (0);
}

/*
#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int argc, char **argv)
{
	int	start;
	int	end;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	end = 0;
	while (argv[1][end])
		end++;
	end--;
	while (end >= 0 && is_space(argv[1][end]))
		end--;
	if (end < 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	start = end;
	while (start >= 0 && !is_space(argv[1][start]))
		start--;
	start++;
	while (start <= end)
	{
		write(1, &argv[1][start], 1);
		start++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
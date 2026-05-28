#include <unistd.h>
int ft_put_char(char c)
{
	return write(1,&c,1);
}

int put_nl()
{
	return ft_put_char('\n');
}

char transform_letter(char c, char start_letter, char end_letter)
{
	int i = 0;

	while (i < 13)
	{
		if(c == end_letter)
			c = start_letter;
		else
			c++;
		i++;
	}
	return c;
}

int is_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

int is_maj(char c)
{
	return(c >= 'A' && c <= 'Z');
}

int main(int argc, char **argv)
{

	if(argc != 2)
	{
		put_nl();
		return (0);
	}
	int i = 0;
	char *str = argv[1];
	char curr_c;
	char char_to_print;
	
	while(str[i])
	{
		curr_c = str[i];
		if(is_min(curr_c))
			char_to_print = transform_letter(curr_c, 'a', 'z');
		else if(is_maj(curr_c))
			char_to_print = transform_letter(curr_c, 'A', 'Z');
		else
			char_to_print = curr_c;
		ft_put_char(char_to_print);
		i++;
	}
	put_nl();
	return (0);
}
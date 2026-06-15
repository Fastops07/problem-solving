#include <unistd.h>

void put_nl(void)
{
	write(1,"\n",1);
}
int is_min(char c)
{
	return (c >= 'a' && c <= 'z');
}

int is_maj(char c)
{
	return (c >= 'A' && c <= 'Z');
}
int is_alpha(char c)
{
	return (is_min(c) || is_maj(c));
}


int main(int argc, char **argv)
{
	if(argc != 2)
	{
		put_nl();
		return (0);
	}
	char *str = argv[1];
	int i = 0;
	while(str[i])
	{
		char to_print = str[i];
		if(to_print == 'z')
			to_print = 'a';
		else if(to_print == 'Z')
			to_print = 'A';
		else if(is_alpha(to_print))
			to_print++;
		write(1,&to_print,1);
		i++;
	}
	put_nl();
}
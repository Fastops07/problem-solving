#include <unistd.h>
void put_nl(void)
{
	write(1,"\n",1);
}

int get_alphabet_index(char c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 'a');
	if(c >= 'A' && c <= 'Z')
		return (c - 'A');
	return -1;
}
int main(int argc, char **argv)
{
	if(argc != 2)
	{
		put_nl();
		return (0);
	}
	char *str = argv[1];
	int index = 0;
	int i = 0;
	while (str[i])
	{
		char curr = str[i];
		if(curr >= 'a' && curr <= 'z')
			curr = 'z' - (curr - 'a');

		else if (curr >= 'A' && curr <= 'Z')
			curr = 'Z' - (curr - 'A');
		write (1,&curr,1);
		i++;
	}
		put_nl();
		return 0;
}
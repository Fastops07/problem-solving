#include "unistd.h"
void display_new_line(void)
{
	write(1,"\n", 1);
}

void print_n_time(char c, int n)
{
	int i = 0;
	while(i < n)
	{
		write(1, &c, 1);
		i++;
	}
}

int is_minuscule(char c)
{
	return (c >= 'a' && c <= 'z');
}

int is_majuscule(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int is_alpha(char c)
{
	return (is_minuscule(c) || is_majuscule(c));
}


int main (int argc, char **argv)
{

	if(argc != 2)
	{
		display_new_line();
		return (0);
	}
	int i = 0;
	char *str = argv[1];
	char curr_c;

	while(str[i])
	{
		curr_c = str[i];
		write(1,&curr_c,1);
		if(is_alpha(curr_c))
		{
			if(is_minuscule(curr_c))
				print_n_time(curr_c, curr_c - 'a');	
			if(is_majuscule(curr_c))
				print_n_time(curr_c, curr_c - 'A');
		}
		i++;
	}
	display_new_line();
}
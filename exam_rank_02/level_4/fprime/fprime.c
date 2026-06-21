#include <stdlib.h>
#include <stdio.h>


int	main(int argc, char **argv)
{
	int	nb;
	int	div;
	int	first;

	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	nb = atoi(argv[1]);
	if (nb == 1)
	{
		printf("1\n");
		return (0);
	}
    first = 1;
    div = 2;
    
    while(nb > 1)
    {
        if(nb % div == 0)
        {
            if (!first)
                printf("*");
            printf("%d",div);
            first = 0;
            nb = nb / div;
        }
        else 
            div++;
    }
    
	printf("\n");
	return (0);
}

/*
int is_prime(int nb)
{
    if(nb <=1)
        return 0;
    int i = 2;
    while(i < nb)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int find_highest_prime(int nb)
{
    int i = nb;

    while(i > 0)
    {
        if(is_prime(i) && (nb % i == 0))
            return i;
        i--;
    }
    return -1;
}

void print_prime(int nb,int i)
{
    int curr_prime = find_highest_prime(nb);
    int res = nb / curr_prime;
    if(res > 1)
        print_prime(res, i + 1);
    if(i == 0)
        printf("%d",curr_prime);
    else
        printf("*%d",curr_prime);
}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("\n");
        return 0;
    }
    int nb = atoi(argv[1]);
    if((is_prime(nb)) || nb == 1)
    {
        printf("%d\n",nb);
        return 0;
    }
 
    print_prime(nb, 0);
    printf("\n");
    return 0;
}
*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        printf("\n");
        return (0);
    }
    int first_nb = atoi(argv[1]);
    int second_nb = atoi(argv[3]);
    char operator = argv[2][0];

    if(operator == '+')
    {
        printf("%d", first_nb + second_nb);
    }
    if(operator == '-')
    {
        printf("%d", first_nb - second_nb);
    }
    if(operator == '*')
    {
        printf("%d", first_nb * second_nb);
    }
    if(operator == '/')
    {
        printf("%d", first_nb / second_nb);
    }
    if(operator == '%')
    {
        printf("%d", first_nb % second_nb);
    }
    printf("\n");
    return (0);
}
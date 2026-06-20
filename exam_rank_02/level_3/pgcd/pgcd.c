#include <stdlib.h>
#include <stdio.h>

int can_divid(int nb, int div)
{
    return (nb % div == 0);
}

int main(int argc, char *argv[])
{
    if(argc != 3)
    {
        printf("\n");
        return 0;
    }

    int nb_1 = atoi(argv[1]);
    int nb_2 = atoi(argv[2]);

    if(nb_1 == 0 || nb_2 == 0)
    {
        printf("\n");
        return 0;
    }

    int pgcd;
    if(nb_1 <= nb_2)
        pgcd = nb_1;
    else
        pgcd = nb_2;
    
    while(pgcd > 0)
    {
        if(can_divid(nb_2,pgcd) && can_divid(nb_1,pgcd))
        {
            printf("%d\n",pgcd);
            return (0);
        }
        pgcd--;
    }
    return 0;
}
#include <unistd.h>

void put_nb(int nb)
{
    if(nb > 9)
        put_nb(nb / 10);
    char c = nb % 10 + '0';
    write(1,&c,1);
}

int main(int argc, char **argv)
{
    (void)argv;
    put_nb(argc - 1);
    write(1,"\n",1);
    return 0;
}
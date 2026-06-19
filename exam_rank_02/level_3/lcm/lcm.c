int can_divid(unsigned int nb, unsigned int i)
{
    return (nb % i == 0);
}
unsigned int    lcm(unsigned int a, unsigned int b)
{

    if(a == 0 || b == 0)
        return 0;
    unsigned int i;
    if(a >= b)
        i = a;
    else
        i = b;
    
    while (1)
    {
        if(can_divid(i,a) && can_divid(i,b))
            return (i);
        i++;
    }
    return 0;

}
/*
#include <stdio.h> 
int main()
{
    printf("%d\n",lcm(21, -10));
    
}
*/
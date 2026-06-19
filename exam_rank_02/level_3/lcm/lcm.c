

int can_divid(unsigned int nb, unsigned int i)
{
    return (nb % i == 0);
}
unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int i = 2;

    if(a == 0 || b == 0)
        return 0;
     while(i <= a && i <= b)
     {
        if(can_divid(a,i) && can_divid(b,i))
            return i;
        i++;
     }
     return 0;

}

#include <stdio.h> 
int main()
{
    printf("%d\n",lcm(0, 2));
    
}
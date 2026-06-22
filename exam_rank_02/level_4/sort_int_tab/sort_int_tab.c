void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int j = 0;

    while(i + 1 < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[j] < tab[i])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }           
        i++;
    }
}
#include <stdio.h>
int main()
{
    int size = 6;
    int tab[] = {2,1, -10, -1000, 999, 3421};
    sort_int_tab(tab,size);
    for(int i = 0; i < size; i++)
        printf("Tab[%d]:%d\n",i,tab[i]);
}
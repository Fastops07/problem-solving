
#include "flood_fill.h"
void  fill(char **tab, t_point size, t_point begin, char model)
{
    t_point next;
    if(begin.y < 0 || begin.x < 0 || begin.y >= size.y || begin.x >= size.x)
        return ;
    if(tab[begin.y][begin.x] != model)
        return ;

    tab[begin.y][begin.x] = 'F';

    next.y = begin.y + 1; // En bas
    next.x = begin.x;
    fill(tab,size,next,model);

    next.y = begin.y - 1; // En haut
    next.x = begin.x;
    fill(tab,size,next,model);

    next.y = begin.y;
    next.x = begin.x + 1; // A droite
    fill(tab,size,next,model);

    next.y = begin.y;
    next.x = begin.x - 1; // A gauche
    fill(tab,size,next,model);
}
  void  flood_fill(char **tab, t_point size, t_point begin)
  {
    char model = tab[begin.y][begin.x];
    if(model == 'F')
        return ;
    fill(tab, size, begin, model);

  }
/*
#include <stdlib.h>
#include <stdio.h>

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
    
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};


	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
*/
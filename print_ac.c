#include <stdio.h>

/**
* main - fonction
* @ac: param
* @av: param
* Return: 0
*/

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("av[%d] = %s\n", i, av[i]);
		i++;
	}
	return (0);
}

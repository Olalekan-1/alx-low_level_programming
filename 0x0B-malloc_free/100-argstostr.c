#include <stdlib.h>
#include "main.h"

/**
* argstostr - function to concatenate all argument
* @ac: index count of argument
* @av: name the argument
* Return: the concatenated
*/

char *argstostr(int ac, char **av)
{	int len = 0, i = 0, j = 0, k = 0;
	char *concat;

	if (av == 0 | ac == 0)
	{
	return (((void *)0));
	}
	while (i < ac)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
		j = 0;
		i++;
	}

	concat = malloc((sizeof(char) * len) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			concat[k] = av[i][j];
			k++;
			j++;
		}
		concat[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	concat[k] = '\0';
	return (concat);
}










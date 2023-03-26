#include <stdlib.h>
#include "main.h"

char **strtow(char *str)
{	int i = 0, len = 0, wc = 0, j = 0;
	char **word;

	if ((str == ((void *)0)) || (str == ""))
	{
		return (((void *)0));
	}
	while(str[i] != '\0')
	{
		i++;
	}
	len++;
	word = malloc((len + 1) * sizeof(char *));
	if (word == ((void *)0))
	{
		return (((void *)0));
	}
	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == '\0') || str[i] == '\t')
		{
			word[wc][j] = '\0';
			j = 0;
			wc++;
		}
		else
		{
		word[wc][j] = str[i];
		j++;
		}
	}
	
	return (word);
	
}

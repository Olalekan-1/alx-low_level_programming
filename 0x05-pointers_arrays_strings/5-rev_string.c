#include "main.h"

/**
* rev_string - To print string in reverse
* @s: The variable to print from
* Return: print string in reverse
*/

void rev_string(char *s)
{	int l, i;
	l = 0;
	i = 0;

	while (s[i++])
	l++;

	for (i	= l - 1; i >= l / 2; i--)
	{
	char j = s[i];
	s[i] = s[l - i - 1];
	s[l - i - 1] = j;
	}

}

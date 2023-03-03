#include "main.h"

/**
* leet - To convert some stings to a leetspeak
* @str: The string to print from
* Return: The encode string
*/

char *leet(char *str)
{	int i, j;
	char s1[] = "AaEeOoTtLl";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (str[i] == s1[j])
	{
	str[i] = s2[j];
	}
	}
	}
	return (str);
}

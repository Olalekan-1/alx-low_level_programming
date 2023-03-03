#include "main.h"

/**
* rot13 - To encode sting using rot13
* @str: pointer to te string
* Return: The rot 13 value of the string
*/


char *rot13(char *str)
{	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
	if (str[i] == s1[j])
	{
	str[i] = s2[j];
	break;
	}
	}
	}
	return (str);
}

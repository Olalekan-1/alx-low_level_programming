#include "main.h"

/**
* palindrome - check if string is palindrome
* @s: pointer to the string
* @start: the start of the string
* @end: the end of the string
* Return: 1 if palindrome else 0
*/
int palindrome(char *s, int start, int end);

int palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}
	if (s[start] != s[end])
	{
	return (0);
	}
	return (palindrome(s, start + 1, end - 1));
}

int len(char *s);
/**
* len - length of string
* @s: pointer to string
* Return: length of string
*/

int len(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + len(s + 1));
}

/**
* is_palindrome - Check if string is palindrome
* @s: the strig to check
* Return: 1 if palindrome else 0
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
	return (1);
	}
	return (palindrome(s, 0, len(s) - 1));
}

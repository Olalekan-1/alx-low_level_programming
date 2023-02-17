#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
*/

int main(void)
{	int x;
	for (x = 48; x <= 57; x++)
	{	putchar(x);
	}
	for (x = 'a'; x < 'g'; x++)
	{	putchar(x);
	}
	putchar(10);
	return (0);
}

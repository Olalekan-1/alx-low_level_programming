#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (sucess)
*/

int main(void)
{	int x;
	for (x = 'a'; x <= 'z'; x++)
	{
	if (x == 'e')
	{	continue;
	}
	else if (x == 'q')
	{	continue;
	}
	putchar(x);
	}
	putchar(10);
	return (0);
}

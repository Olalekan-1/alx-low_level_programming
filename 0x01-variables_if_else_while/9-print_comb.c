#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (sucess)
*/

int main(void)
{	int x;
	for (x = 48; x < 58; x++)
	{	putchar(x);
	if (x != 57)
	{	putchar(44);
	putchar(32);
	}
	}
	putchar(10);
	return (0);
}

#include <stdio.h>

/**
* main - Entry point
* Return: always 0 (sucess)
*/
int main(void)
{	int x = 0;

	while (x < 10)
	{	printf("%i", x);
		x++;
	}
	putchar(10);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
/**
* main - Entry point
* Return: Always O (sucess)
*/

int main(void)
{	int x;
	int y;

	for (x = 'a'; x <= 'z'; x++)

	{	putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{	putchar(y);
	}
	putchar(10);
	return (0);
}

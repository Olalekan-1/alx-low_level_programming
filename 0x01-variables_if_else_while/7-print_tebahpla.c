#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (sucess)
*/

int main(void)
{	int x;
	for (x = 'z'; x >= 'a'; x--)
	{	putchar(x);
	}
	putchar(10);
	return (0);
}

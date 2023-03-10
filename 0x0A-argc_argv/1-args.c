#include <stdio.h>

/**
* main - To print the number of argument used
* @argc: count the argument
* @argv: The name of the argument
* Return: 0 always success
*/

int main(int argc, char **argv)
{	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

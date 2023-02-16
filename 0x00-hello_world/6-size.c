#include <stdio.h>

/**
* main - prints the data sizes
* Return: 0
*/

int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %li byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long unsigned int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}


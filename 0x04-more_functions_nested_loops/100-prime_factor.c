#include <stdio.h>
#include <math.h>

/**
* main - print the largest prime factor
* Return: 0 always sucess
*/

int main(void)
{	long x, maxf;
	/*long number = 612852475143;*/
	long  number = 90;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}

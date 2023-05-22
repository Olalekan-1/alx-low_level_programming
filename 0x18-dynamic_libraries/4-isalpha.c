#include"main.h"

/**
*_isalpha - check if charter is letter
*@c: the character to be checked
*Return: 1 if c is a letter, otherwise return 0
*/
int _isalpha(int c)
{

	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')));
}


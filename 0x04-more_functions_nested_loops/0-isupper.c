#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: variable text
 * Return: Alway 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

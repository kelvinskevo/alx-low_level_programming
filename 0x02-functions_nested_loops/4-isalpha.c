#include "main.h"

/**
 * _isalpha - checks if character is a letter and either is in
 * uppercase or lowercase
 * @c: character to check
 *
 * Return: 1 if c is a letter and is either lowercase or
 * uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


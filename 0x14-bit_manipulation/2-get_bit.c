#include "main.h"

/**
*get_bit - returns the value of a bit at a given index
*@n:  number
*@index: index starting from 0 of the bit required
*
*Return: The value of the bit index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}

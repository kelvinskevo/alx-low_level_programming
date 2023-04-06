#include "main.h"

/**
*flip_bits - flips to get from one number to another.
*@n: 1st  number
*@m: last number
*
*Return: the number of flips
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped >>= 1;
	}
	return (count);
}

#include "main.h"
/**
 * _islower - checks if character is in lower case
 *
 * Returns: 1 if lowercase 0 otherwise
 *
 */

int _islower(int l)
{
	if (l >= 97 && l <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

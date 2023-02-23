#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 * @j:
 * @k;
 *
 * Return void;
 */

void more_numbers(void)
{
	int j, k;

	for (j = 0; j <= 10; j++)
	{
		for (k = 1;  k <= 14; k++)
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}


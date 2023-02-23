#include "main.h"

/**
 * print_numbers - print numbers 0 to 9 skippining 2 & 4
 *
 * Return (0)
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == 2 || i == 4))
		_putchar(i);
	}
	_putchar('\n');
}

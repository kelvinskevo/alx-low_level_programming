#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Returns: Always 0.
 *
 */

void print_alphabet_x10(void)
{
	char let;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet - program that prints alphabet in lowercase
 *
 * return 0
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);

	_putchar('\n');
}

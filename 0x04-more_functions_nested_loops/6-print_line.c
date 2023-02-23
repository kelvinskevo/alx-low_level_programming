#include "main.h"

/**
 * print_line - draws straight line
 * @n: number of times _ printed
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

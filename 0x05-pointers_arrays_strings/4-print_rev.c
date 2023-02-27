# include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to print
 */

void print_rev(char *s)
{
	int len = 0;
	int st;

	while (*s  != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (st = len; st > 0; st--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every other char of a string,
 * start with 1st char followed by new line
 *
 * @str: string to print
 */

void puts2(char *str)
{
	int len = 0;
	int w = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	w = len - 1;

	for (z = 0; z <= w; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}

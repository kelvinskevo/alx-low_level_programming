#include "main.h"

/**
 * _pow_recursion - rettuns power
 * @x:input
 * @y:input
 *
 * Return: value of power
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}

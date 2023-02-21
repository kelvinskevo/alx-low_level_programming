#include "main.h"

/**
 * print_last_digit - prints last digi of a number
 *
 * @n: number to get last digit
 *
 * Return: value of last digit
 *
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');

	return (ld);
}

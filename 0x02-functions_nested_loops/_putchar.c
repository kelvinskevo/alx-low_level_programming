#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character to c to stdout
 *
 * Return: On Success 1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

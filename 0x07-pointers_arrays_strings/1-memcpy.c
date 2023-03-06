#include "main.h"

/**
 * _memcpy - entry point
 * @dest: to memory area
 * @src: bytes from mem area
 * @n: function copies
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

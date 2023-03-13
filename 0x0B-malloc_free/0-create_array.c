#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: char to assign
 *
 *
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *strn;
	unsigned int i;

	strn = malloc(sizeof(char) * size);
	if (size == 0 || strn == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		strn[i] = c;

	return (strn);
}

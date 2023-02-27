#include "main.h"

/**
 * print_array -prints n elements of an array
 * @a: array name
 * @n: number of times of array to br printed
 *
 * Return: a and n input
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n - 1; j++)
	{
		printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
		printf("%d", a[j]);
	}
	printf("\n");
}

#include <stdio.h>

/**
 * main -program thatt prints the first 98 Fibonacci numbers
 **
 * Return: 0 on success
 */

int main(void)
{
	unsigned long int i;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int limit = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}

	before1 = (before / limit);
	before2 = (before % limit);
	after1 = (after / limit);
	after2 = (after % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", after1 + (after2 / limit));
		printf("%lu", after2 % limit);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");

	return (0);
}


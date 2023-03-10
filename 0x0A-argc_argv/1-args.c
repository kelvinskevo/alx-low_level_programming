#include <stdio.h>
#include "main.h"

/**
 * main  - prins number of arguments passed to the program
 * @argc: No of arguments
 * @argv: array of arguments
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

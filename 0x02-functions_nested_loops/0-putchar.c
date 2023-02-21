#include <stdio.h>
/**
 * main - program that prints a string using putchar function
 *
 * Return: Always (0) (Success)
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;

		return (0);
	}

	putchar('\n');
}

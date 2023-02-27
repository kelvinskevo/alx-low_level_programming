#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *str)
{
	int i = 0,
	sign_count = 0,
	num = 0,
	len = 0,
	found_digit = 0,
	is_negative = 0, digit;

	while (str[len] != '\0')
		len++;

	while (i < len && found_digit == 0)
	{
		if (str[i] == '-')
			++sign_count;

		if (str[i] >= '0' && str[i] <= '9')
		{
			digit = str[i] - '0';
			if (sign_count % 2)
				digit = -digit;
			num = num * 10 + digit;
			found_digit = 1;
			if (str[i + 1] < '0' || str[i + 1] > '9')
				break;
			found_digit = 0;
		}
		i++;
	}

	if (found_digit == 0)
		return (0);

	if (sign_count % 2)
		is_negative = 1;

	if (is_negative)
		num = -num;

	return (num);
}

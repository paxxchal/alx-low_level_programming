#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert to an integer.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	// Handle leading whitespace
	while (s[i] == ' ')
		i++;

	// Handle optional sign
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	// Convert characters to integers until a non-digit character is encountered
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return result * sign;
}

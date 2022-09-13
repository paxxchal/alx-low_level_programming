#include "main.h"
/**
 * print_alphabet - function
 * description - program that prints the alphabet, in lowercase
 * followed by a new line.
 */
void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program prints the lowercase alphabet in reverse
 * followed by a new line.
 * Return: 0 if (successful)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

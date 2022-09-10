#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase followed by a new line.
 * Return: 0 if (successful)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this program prints the alphabet in lowercase
 * followed by a new line except the alphabets q and e
 * Return: 0 if (successful)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

	putchar('\n');
	return (0);
}

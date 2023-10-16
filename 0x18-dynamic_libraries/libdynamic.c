#include "main.h"

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to print
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	/* Implement this function */
	return (0);
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	/* Implement this function */
	return (0);
}

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to find the absolute value of.
 *
 * Return: The absolute value of n.
 */
int _abs(int n)
{
	/* Implement this function */
	return (0);
}

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	/* Implement this function */
	return (0);
}

/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	/* Implement this function */
	return (0);
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to find the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	/* Implement this function */
	return (0);
}

/**
 * _puts - Prints a string to the standard output.
 * @s: The string to print.
 */
void _puts(char *s)
{
	/* Implement this function */
}

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	/* Implement this function */
	return (dest);
}

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string in dest.
 */
char *_strcat(char *dest, char *src)
{
	/* Implement this function */
	return (dest);
}

/**
 * _strncat - Concatenates n characters from one string to another.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to concatenate.
 *
 * Return: A pointer to the resulting string in dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Implement this function */
	return (dest);
}

/**
 * _strncpy - Copies n characters from one string to another.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of characters to copy.
 *
 * Return: A pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* Implement this function */
	return (dest);
}

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	/* Implement this function */
	return (0);
}

/**
 * _memset - Fills memory with a constant byte.
 * @s: The memory area to fill.
 * @b: The byte value to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* Implement this function */
	return (s);
}

/**
 * _memcpy - Copies memory area from src to dest.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Implement this function */
	return (dest);
}

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	/* Implement this function */
	return (NULL);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: The number of bytes in the initial segment of s that consist of characters in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	/* Implement this function */
	return (0);
}

/**
 * _strpbrk - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the first character in s that matches any character in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	/* Implement this function */
	return (NULL);
}

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of needle in haystack, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	/* Implement this function */
	return (NULL);
}

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}
	if (c == '\0')
		return s;
	return (NULL);
}

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: The number of bytes in the initial segment of s that consist of characters in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int matched = 1;

	while (*s && matched)
	{
		int is_match = 0;
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				is_match = 1;
				break;
			}
			a++;
		}
		if (is_match)
			count++;
		else
			matched = 0;
		s++;
	}

	return (count);
}

/**
 * _strpbrk - Locates the first occurrence of a character in a string.
 * @s: The string to search.
 * @accept: The string containing characters to search for.
 *
 * Return: A pointer to the first character in s that matches any character in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
				return s;
			a++;
		}
		s++;
	}
	return (NULL);
}

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of needle in haystack, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return haystack;

		haystack++;
	}
	return (NULL);
}

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to be written
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return putchar(c);
}

/**
 * _islower - checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return islower(c);
}

/**
 * _isalpha - checks if a character is alphabetic
 * @c: The character to be checked
 *
 * Return: 1 if c is alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	return isalpha(c);
}

/**
 * _abs - returns the absolute value of an integer
 * @n: The integer to be checked
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	return abs(n);
}

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return isupper(c);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return isdigit(c);
}

/**
 * _strlen - returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	return strlen(s);
}

/**
 * _puts - writes a string to stdout
 * @s: The string to be written
 */
void _puts(char *s)
{
	puts(s);
}
/**
 * _strcpy - copies a string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	return strcpy(dest, src);
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	return atoi(s);
}
/**
 * _strcat - concatenates two strings
 * @dest: the first string
 * @src: the second string to be added to the end of dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return strcat(dest, src);
}
/**
 * _strncat - concatenates two strings, up to n characters from src
 * @dest: the first string
 * @src: the second string to be added to the end of dest
 * @n: number of characters from src to be added to dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return strncat(dest, src, n);
}
/**
 * _strncpy - copies a string, up to n characters
 * @dest: the destination string
 * @src: the source string to be copied
 * @n: number of characters to be copied from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return strncpy(dest, src, n);
}
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: negative value if s1 is less than s2, 0 if equal, and positive value
 * if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	return strcmp(s1, s2);
}
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill the memory
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: number of bytes to be copied from src to dest
 *
 * Return: pointer to the destination memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return memcpy(dest, src, n);
}
/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to be searched for
 *
 * Return: pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return strchr(s, c);
}
/**
 * _strspn - finds the length of the initial segment of @s
 * which consists entirely of characters specified by @accept
 *
 * @s: input string to scan
 * @accept: characters to match
 *
 * Return: number of bytes in the initial segment of @s which
 * consists entirely of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
/**
 * _strpbrk - locates the first occurrence in @s of any character
 * specified in @accept
 *
 * @s: input string to search in
 * @accept: characters to match
 *
 * Return: a pointer to the first occurrence in @s of any character
 * specified in @accept or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}
/**
 * _strstr - finds the first occurrence of the substring @needle
 * in the string @haystack
 *
 * @haystack: input string to search in
 * @needle: substring to be searched
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return strstr(haystack, needle);
}

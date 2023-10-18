#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int c);

/**
 * _isalpha - checks if a character is alphabetic
 * @c: The character to check
 *
 * Return: 1 if the character is alphabetic, 0 otherwise
 */
int _isalpha(int c);

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute the absolute value of
 *
 * Return: The absolute value of n
 */
int _abs(int n);

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * _strlen - computes the length of a string
 * @s: The string to compute the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s);

/**
 * _puts - prints a string to stdout, followed by a newline character
 * @s: The string to print
 *
 * Return: Void
 */
void _puts(char *s);

/**
 * _strcpy - copies a string to another string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s);

/**
 * _strcat - concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings, up to n characters from the source string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to concatenate from the source string
 *
 * Return: A pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies n characters from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of characters to copy
 *
 * Return: A pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A negative integer if s1 is less than s2, a positive integer if s1 is greater than s2, or 0 if s1 is equal to s2
 */
int _strcmp(char *s1, char *s2);

/**
 * _memset - sets n bytes of a string to a given value
 * @s: The string to set
 * @b: The value to set the string to
 * @n: The number of bytes to set
 *
 * Return: A pointer to the string
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies n bytes from one string to another
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination string
 */
char *_memcpy(char *dest, char *src, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif

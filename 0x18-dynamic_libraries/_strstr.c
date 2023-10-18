#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the first occurrence of `needle` in `haystack`, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay = haystack;
	char *need = needle;

	while (*hay)
	{
		if (*hay == *need)
		{
			char *temp_hay = hay;
			char *temp_need = need;

			while (*temp_hay == *temp_need && *temp_hay && *temp_need)
			{
				temp_hay++;
				temp_need++;
			}

			if (!*temp_need)
				return hay;
		}

		hay++;
	}

	return NULL;
}

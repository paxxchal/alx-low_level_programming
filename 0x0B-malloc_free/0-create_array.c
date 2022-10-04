#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: argument to the function
 * @c: argument to the function
 *
 * return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
    char *s;
    unsigned int i = 0;

    if (size == 0)
    {
        return(NULL);
    }
    s = malloc(size * sizeof(c));
    if (s == NULL)
    {
        return(NULL);
    }

    while (i < size)
    {
        s[i] = c;
        i++;
    }


    return(s);
    free(s);
}
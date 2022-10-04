#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: argument to the function
 * @c: argument to the function
 * return: NULL if size = 0 or fails, or a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
    char *s;
    unsigned int i = 0;
    s = malloc(size * sizeof(c));

    while (i < size)
    {
        if (s == NULL)
        {
            return(NULL);
        }
        else if (size == 0)
        {
            return(NULL);
        }
        s[i] = c;
        i++;
    }
    free(s);
    return(s);
}

/**
 * main - basic,
 * return: Always 0;
 */

int main()
{
    return(0);
}
#include "main.h"
/** 
 * _memset - fills memory with a constant byte
 * and Returns a pointer to the memory area 
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * return : the pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for(i = 0; i < n; i++)
    {
        *(s + i) = b;
    }

    return(s);
}

int main()
{
    return(0);
}
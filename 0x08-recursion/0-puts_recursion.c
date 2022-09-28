#include "main.h"
/**
 * _puts_recursion - prints a string
 * followed by a new line
 * @s: character passed to _puts_recursion
 * return: no return
 */

void _puts_recursion(char *s)
{
    if(*s == '\0')
    {
        _putchar('\n');
    }
    else
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
}

/**
 * main - calls the other function
 * return: Always 0
 */
int main()
{
    return(0);
}
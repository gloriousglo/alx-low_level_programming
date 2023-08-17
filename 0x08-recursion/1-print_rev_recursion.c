#include "main.h"

/**
 * _print_rev_recursion - Print the reverse of a string
 * @s: string to be reversed
 * Return: return nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}


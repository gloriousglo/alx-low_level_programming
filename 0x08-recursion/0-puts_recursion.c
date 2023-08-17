#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: return nothing
 */

void _puts_recursion(char *s)
{
	putchar(*s);
	s++;
	if(*s != '\0')
	{
		_puts_recursion(s);
	}
	else{
		putchar('\n');
		}
}


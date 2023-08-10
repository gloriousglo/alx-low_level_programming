#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: no return.
 */

void _puts_recursion(char *s)
{
	putchar(*s);
	s++;
	if (*s !='\0')
	{
		_puts_recursion(s);
	}
	else
	{
		putchar('\n');
	}
	int main()
	{
		_puts_recursion("Hello world\n");
		return(0);
	}
}

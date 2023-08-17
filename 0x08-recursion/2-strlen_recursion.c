#include "main.h"

/**
 * _strlen_recursion - funtion to return the lenght of a string
 * @s: the string whose length is to be returnde
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}

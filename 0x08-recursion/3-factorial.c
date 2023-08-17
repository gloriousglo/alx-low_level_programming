#include "main.h"

/**
 * factorial - funtion to return the factorial of a given number
 * @n: the number whose factorial is to be returned
 * Return: return the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

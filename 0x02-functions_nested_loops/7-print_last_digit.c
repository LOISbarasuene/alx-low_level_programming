#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return 0 (success)
 */

int print_last_digit(int n)
{
	int x;

	if (n > 0)
	{
		x = (-1 * (n % 10));
		_putchar(x + 48);
	}
	else
	{
		x = n % 10;
		_putchar((n % 10) + 48);
	}
	return (x);
}

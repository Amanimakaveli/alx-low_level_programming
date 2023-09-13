#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: int to check
 * Return: 1 for positive num, -1 for negative num or 0 if n is zero
 *
 */

int print_sign(int n)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		} else if (n == 0)
		{
			_putchar(48);
			return (0);
		} else if (n < 0)
		{
			_putchar('-');
		}
			return (-1);
	}



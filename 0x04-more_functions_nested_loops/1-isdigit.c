#include "main.h"

/**
 * _isdigit - check a character is digit
 * @c: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '5')
		return (1);
	else
		return (0);
}



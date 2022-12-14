#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: input number
 * return: 1 if n is greater than 0, 0 is 0, -1 if n less than 0
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
	return (0);
}

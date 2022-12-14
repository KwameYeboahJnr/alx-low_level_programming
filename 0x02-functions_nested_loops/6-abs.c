#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: input number
 * return: absolute value
 * Return: 0
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	return (0);
}

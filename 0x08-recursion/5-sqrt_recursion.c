#include "main.h"

/**
 *_sqrt_recursion - find natural square root
 *@n: int
 *Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}

/**
 *square - find square root
 *@n: int to find square root
 *@val: square root
 *Return: int
 */

int square(int n, int val)
{
	if ((val * val) == n)
		return (val);
	else if ((val * val) > n)
		return (-1);
	else
		return (square(n, val + 1));
}

#include "main.h"
/**
 *malloc_checked - array for print a string
 *@b: number of memory
 *Return: pointer to allocated memory or normal process termination
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

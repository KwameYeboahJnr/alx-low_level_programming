#include "main.h"
/**
 * print_alphabet - Entry
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
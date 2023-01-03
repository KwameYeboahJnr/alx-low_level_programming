#include "main.h"
/**
 *_memset - fills the memory with a constant byte
 *@s: pointer to the memory area to be filled
 *@c: character to fill the memory area
 *@n: the number of bytes to be filled
 *description _memset: over ther
 *Return: a pointer to the filled memory area @s
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}

#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @x: constant byte
 * @n: number of bytes
 * Return: Pointer to dest
 */
char *_memset(char *s, char x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  x;

	return (s);
}

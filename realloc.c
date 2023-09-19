#include "shell.h"

/**
 * _memset - fillsMemory with constant byt
 * @s: the pointer to the memoryArea
 * @b: byte to fill *s
 * @n: Amount ofBytes tobe filled
 * Return: (s)a pointer tothe memory areas
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - freesAstringOFstrings
 * @pp: stringOFstrings
 */

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates A block of memo
 * @ptr: pointer block
 * @old_size: byteSize ofprevious block
 * @new_size: bytesize of block
 * Return: pointer to the ol'block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

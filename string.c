#include "shell.h"

/**
 * _strlen - returns length ofstring
 * @s: string whoselength to check
 * Return: integer length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performslexicogarphic comparisonOF 2 strangs.
 * @s1: first strang
 * @s2: second strang
 * Return: negative ifs1 < s2, positive ifs1 > s2, 0 if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checksIF needle starts withhaystack
 * @haystack: string 2search
 * @needle: substring tofind
 * Return: addressnext char of haystack ,NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - Concatenat 2 strings
 * @dest: destinationBuffer
 * @src: source buffa
 * Return: pointerto destination buffa
 */

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

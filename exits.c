#include "shell.h"

/**
 **_strncpy - copiesa string
 *@dest: the destinationstring to becopied to
 *@src: the sourcestring
 *@n: theamountof characters to be copied
 *Return: theconcatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - oncatenatestwostrings
 *@dest: thefirststring
 *@src: thesecond string
 *@n: theamount of bytesto be maximally used
 *Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locatesacharacter in astring
 *@s: the string tobeparsed
 *@c: the character tolookfor
 *Return: pointerto thememory area s
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}


#include "shell.h"

/**
 * _eputs - printsaninput string
 * @str: the string tobeprinte
 * Return: Nothing
 */

void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writesthecharacter c to stderr
 * @c: character toprint
 * Return: Onsuccess 1.
 * Onerror, -1 is returned, anderrno isset apropriately.
 */

int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - writesthecharacter c togiven
 * @c: The charactertoprint
 * @fd: Thefiledescriptor towriteto
 * Return: Onsuccess 1.
 * Onerror, -1 isreturned, anderrno is setappropriately.
 */

int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - printsan inputstring
 * @str: the stringto be]printed
 * @fd: the filedescriptor to writeto
 * Return: the numberofchars put
 */

int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}


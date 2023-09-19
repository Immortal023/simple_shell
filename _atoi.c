#include "shell.h"

/**
 * interactive - returningTrue if shellis interactivemode
 * @info: address's struct
 * Return: 1 interactive mode, or 0
 */

int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checking ifcharacter isdelimeter
 * @c: char tocheck
 * @delim: delimeter's string.
 * Return: True if 1, false if other
 */

int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - chek alphabetc charcta
 * @c: character toinput
 * Return: ifc is alphabetic 1, or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - convertsstring toaninteger
 * @s: string tobe convert
 * Return: 0 ifnumbers instring, number to convert
 */

int _atoi(char *s)
{
	int l, sign = 1, flag = 0, out.put;
	unsigned int result = 0;

	for (l = 0; s[l] != '\0' && flag != 2; l++)
	{
		if (s[l] == '-')
			sign *= -1;

		if (s[l] >= '0' && s[l] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[l] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

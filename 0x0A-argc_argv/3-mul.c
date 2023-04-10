#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, e, o, len, g, num;

	j = 0;
	e = 0;
	o = 0;
	len = 0;
	g = 0;
	num = 0;
	while (s[len] != '\0')
		len++;
	while (j < len && g == 0)
	{
	if (s[j] == '-')
		++e;
	if (s[j] >= '0' && s[j] <= '9')
	{
		num = s[j] - '0';
	if (e % 2)
		num = -num;
		o = o * 10 + num;
		g = 1;
	if (s[j + 1] < '0' || s[j + 1] > '9')
	break;
		g = 0;
	}
		j++;
	}
	if (g == 0)
		return (0);
		return (o);
}

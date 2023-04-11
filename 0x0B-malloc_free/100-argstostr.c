#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int j, x, t = 0, l = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (x = 0; av[j][x]; x++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (x = 0; av[j][x]; x++)
		{
			str[t] = av[j][x];
			t++;
		}
		if (str[t] == '\0')
		{
			str[t++] = '\n';
		}
	}
	return (str);
}

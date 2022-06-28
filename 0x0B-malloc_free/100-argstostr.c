#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: int
 * @av: char
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int len, R = 0;
	char *p;

	if (!ac || !av)
	{
		return (NULL);
	}
	R = 0;

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]) + 1;
		R += len;
	}
	p = malloc(sizeof(char) * R + 1);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);

		for (j = 0; j < len; j++, k++)
		{
			p[k] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}

#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new memory location containing concatenation
 */

char *str_concat(char *s1, char *s2)
{
	int i, length, l1;
	int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	length = sizeof(char) * (strlen(s1) + strlen(s2) + 1);
	p = malloc(sizeof(char) * length);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	while (l1 < length && s2[j] != '\0')
	{
		p[l1] = s1[j];
		l1++;
		j++;
	}
	return (p);
	free(p);
}

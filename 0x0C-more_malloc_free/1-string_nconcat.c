#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - program Entry point
 *@s1: input string 1
 *@s2: input string 2
 *@n: input number of bytes
 * Return: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	unsigned int i, n1, n2, j, count, b;

	count = 0;
	b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	if (n >= n2)
	{
		b = n2;

	} else
	{
		for (n2 = 0; n2 < n; n2++)
			b++;
	}
	str = (char *)malloc((n1 + n2 + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < b; i++)
	{
		str[i] = s2[count];
		count++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - program method
 *@b: input string
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}

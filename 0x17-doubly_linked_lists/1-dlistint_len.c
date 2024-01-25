#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - program that returns the number of elements in a linked
 * @h: input of the first element of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}

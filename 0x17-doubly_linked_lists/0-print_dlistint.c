#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - program that prints the elements of a  dlistint_t list
 * @h: input of first element of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		j++;
		h = h->next;
		printf("\n");
	}
	return (j);
}

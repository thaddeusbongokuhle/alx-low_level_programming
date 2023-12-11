#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to  print elements of a list_t list
 * @h: input for first element of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int k = 0;

	while (h != NULL)
	{
		{
			printf("%d", h->n);
			k++;
			h = h->next;
			printf("\n");
		}
	}
	return (k);

}

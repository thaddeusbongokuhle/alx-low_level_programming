#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - function that free elements of a list_t list
 * @h: input of the first element of the list
 * Return: the size of the list that was free´d
 */
size_t free_listint_safe(listint_t **h)
{

	listint_t *temp;
	listint_t *aux;
	size_t k;

	k = 0;
	temp = *h;
	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		k++;
		aux = temp;
		temp = temp->next;
		free(aux);
		if (aux < temp)
		{
			break;
		}
		*h = NULL;
	}
	return (k);
}

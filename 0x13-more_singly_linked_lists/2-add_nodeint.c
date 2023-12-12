#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - function to add the first node in a linked list.
 *@head: input Address of first element of the list
 *@n: input integer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	struct listint_s *temp = NULL;

	temp = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);

}

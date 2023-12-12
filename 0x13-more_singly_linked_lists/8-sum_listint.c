#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data(n) of a linked list
 * @head: input of the first element of the list
 * Return: the sum of all data.
 */
int sum_listint(listint_t *head)
{
	unsigned int add = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		add = head->n + add;
		head = head->next;
	}
	return (add);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - function that prints elements of a list_t list
 * @head: input of the first element of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{

	const listint_t *temp = NULL;
	const listint_t *temp2 = NULL;
	int k, counter;

	k = 0;
	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		k++;
		temp = temp->next;
		temp2 = head;
		counter = 0;
		while (counter < k)
		{

			if (temp == temp2)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (k);
			}
			temp2 = temp2->next;
			counter++;
		}
		if (head == NULL)
			exit(98);
	}
	return (k);
}

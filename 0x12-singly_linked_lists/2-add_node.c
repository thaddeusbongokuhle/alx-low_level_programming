#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - function that adds the first node in a linked list.
 * @head: input Address of first element of the list
 * @str: input  pointer to string we want to print
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{

	struct list_s *temp = NULL;
	int i;

	temp = (struct list_s *)malloc(sizeof(struct list_s));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);

}

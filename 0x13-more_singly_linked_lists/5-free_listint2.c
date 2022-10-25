#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: head of a list.
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}

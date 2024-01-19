#include "sort.h"

void nodeSwap(listint_t **head, listint_t **n1, listint_t *n2);

/**
 * void insertion_sort_list - sorts a doubly linked list of integers
 * @list: pointer to a doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *insert;
	listint_t *i;
	listint_t *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	for (i = (*list)->next; i != NULL; i = temp)
	{
		temp = i->next;
		insert = i->prev;

		while (insert != NULL && i->n < insert->n)
		{
			nodeSwap(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}

/**
 * nodeSwap - swaps two nodes
 * @head: head node
 * @n1: first node to swap
 * @n2: second node to swap
 */

void nodeSwap(listint_t **head, listint_t **n1, listint_t *n2)
{
	if (*head == NULL || *n1 == NULL || n2 == NULL)
		return;

	(*n1)->next = n2->next;

	if (n2->next != NULL)
	{
		n2->next->prev = *n1;
	}
	n2->prev = (*n1)->prev;
	n2->next = *n1;

	if ((*n1)->prev != NULL)
	{
		(*n1)->prev->next = n2;
	}
	else
	{
		*head = n2;
	}
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

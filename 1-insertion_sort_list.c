#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sort the list in ascending order
 * @list: a pointer to the head
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t **head, *current, *next_node, *prev_node;

	head = list;
	if (head == NULL)
		return;

	current = (*head)->next; /*getting the second node, array[1]*/
	while (current != NULL)
	{
		prev_node = current->prev;
		printf("new: %d\n", current->n);
		next_node = current->next;
		while (prev_node != NULL)
		{
			if (current->n < prev_node->n)
			{
				if (current->next != NULL)
					current->next->prev = prev_node;
				prev_node->next = current->next;
				current->next = prev_node;
				current->prev = prev_node->prev;
				prev_node->prev = current;
				if (current->prev == NULL)
					*head = current;
				else
					current->prev->next = current;
				prev_node = current->prev;
				printf("after swapping\n");
				print_list(*head);
			}
			else
			{
				break;
			}
		}
		printf("before");
		current = next_node;
		printf("after");
	}
}

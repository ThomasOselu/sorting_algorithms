#include "sort.h"

/**
 * insertion_sort_list - sort the list in ascending order
 * @list: a pointer to the head
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *node;
	int length = 0;
	int index;

	head = *list;
	node = head;
	while(node != NULL)
	{
		length++;
		node = node->next;
	}

	current = head->next /*getting the second node, array[1]*/

	for (index = 0; index < length; index++)
	{
		prev_node = current->prev;
		temp = current;
		while (prev_node != NULL)
		{
			if (current->n < prev_node->n)
			{
				prev_node->next = temp->next;
				temp->next->prev = prev_node;
			}
			temp = prev_node;
			prev_node = prev_node->prev;
		}
		current = current->next
	}

	while (head != NULL)
	{
		node = head;
		node->
	}
}

#include "sort.h"

/**
 * insertion_sort_list - sort the list in ascending order
 * @list: a pointer to the head
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *node, *current, *temp, *prev_node;
	int length = 0;
	int index;

	head = *list;
	node = head;
	while(node != NULL)
	{
		length++;
		node = node->next;
	}

	current = head->next; /*getting the second node, array[1]*/

	for (index = 0; index < length; index++)
	{
		prev_node = current->prev;
		temp = current;
		while (prev_node != NULL)
		{
			if (current->n < prev_node->n)
			{
				current->next->prev = prev_node;
				prev_node->next = current->next;
				current->next = prev_node;
				current->prev = prev_node->prev;
				prev_node->prev = current;
				if (current->prev == NULL)
					head = current;
				else
					current->prev->next = current;
				prev_node = current->prev;
				print_list(head);
			}
			else
			{
				break;
			}
		}
		current = temp->next
	}

	while (head != NULL)
	{
		node = head;
		node->
	}
}

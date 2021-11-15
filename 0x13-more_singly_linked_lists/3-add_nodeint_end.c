#include "lists.h"
/**
* add_nodeint_end - function that adds a new node at the end of list
* @head: pointer to pointer to list_t list
* @n: integer to copy to new node
* Return: the address of the new element NULL if error
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tempnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;

	else if ((*head)->next == NULL) /* (*(*head)).next == NULL  */
		(*head)->next = newnode;
	else
	{
		tempnode = *head;
		while (tempnode->next != NULL)
			tempnode = tempnode->next;
		tempnode->next = newnode;
	}
	return (newnode);
}

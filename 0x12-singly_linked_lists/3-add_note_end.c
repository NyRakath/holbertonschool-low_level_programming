#include "lists.h"
/**
* add_node_end - function that adds a new node at the end of list
* @head: pointer to pointer to list_t list
* @str: string to copy to new node
* Return: the address of the new element NULL if error
**/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tempnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;

	else if ((*head)->next == NULL)
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

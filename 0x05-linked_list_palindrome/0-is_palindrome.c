#include "lists.h"
/**
 * palindrome - check if a linked list is palindrome.
 * @left: Pointer to the parent node.
 * @right: Pointer to the tail node of the list.
 * Return: 1 if palindrome, otherwise 0.
 */
int palindrome(listint_t **left, listint_t *right)
{
	int is_pal;

	if (right == NULL)
		return (1);

	if (palindrome(left, right->next) == 0)
		return (0);

	is_pal = (right->n == (*left)->n);

	*left = (*left)->next;
	return (is_pal);
}
/**
 * is_palindrome - check if a linked list is palindrome.
 * @head: Pointer to the parent node.
 * Return: 1 if palindrome, otherwise 0.
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);

	return (palindrome(head, *head));
}

#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - the suppose singly list
 * @n: the givrn integer
 * @next: the necessary pointer
 *
 * Description: this is a file that shows the necessary singly list
 *
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);
int check_cycle(listint_t *list);

#endif


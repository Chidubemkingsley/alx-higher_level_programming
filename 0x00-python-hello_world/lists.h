#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - particular list that is singly listed
 * @g: show the particular next integer of the string
 * @next: show the next bout of point
 *
 * Description: this is the list of the function that are shown
 *
 */
typedef struct listint_s
{
int g;
struct listint_s *next;
} 

listint_t;

void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
int check_cycle(listint_t *list);
listint_t *add_nodeint(listint_t **head, const int n);

#endif


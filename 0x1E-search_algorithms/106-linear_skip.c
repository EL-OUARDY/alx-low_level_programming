#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value in a sorted linked list - skip list
 * @list: head of the linked list to search
 * @value: the value to search for
 * Return: pointer to the first node where the value is located, otherwise NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *temp = NULL, *stop = NULL;

    /* Check if the list is valid */
    if (!list)
        return (NULL);

    /* Initialize temp pointer */
    temp = list;

    /* Search for the value using the express lane */
    while (temp && temp->express && temp->express->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               temp->express->index, temp->express->n);
        temp = temp->express;
    }

    /* Determine the stop node */
    stop = temp;
    while (stop && stop->next != stop->express)
        stop = stop->next;

    /* Print information about the value if found */
    if (temp->express)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               temp->express->index, temp->express->n);
        printf("Value found between indexes [%lu] and [%lu]\n",
               temp->index, temp->express->index);
    }
    else
        printf("Value found between indexes [%lu] and [%lu]\n",
               temp->index, stop->index);

    /* Search for the value in the range */
    while (temp != stop && temp->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               temp->index, temp->n);
        temp = temp->next;
    }
    printf("Value checked at index [%lu] = [%i]\n",
           temp->index, temp->n);

    /* Check if the value is found and return the appropriate pointer */
    if (temp == stop)
        return (NULL);
    return (temp);
}
